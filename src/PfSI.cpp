// [[Rcpp::depends(RcppParallel)]]
#include <Rcpp.h>
#include <RcppParallel.h>
#include <cmath>
#include <algorithm>

using namespace Rcpp;
using namespace RcppParallel;

struct Sum : public Worker
{
  // source vector
  const RVector<double> input;

  // accumulated value
  double value;

  // constructors
  Sum(const NumericVector input) : input(input), value(0) {}
  Sum(const Sum& sum, Split) : input(sum.input), value(0) {}

  // accumulate just the element of the range I've been asked to
  void operator()(std::size_t begin, std::size_t end) {
    value += std::accumulate(input.begin() + begin, input.begin() + end, 0.0);
  }

  // join my value with that of another Sum
  void join(const Sum& rhs) {
    value += rhs.value;
  }
};

//' @export
// [[Rcpp::export]]
double parallelVectorSum(NumericVector x) {

  // declare the SumBody instance
  Sum sum(x);

  // call parallel_reduce to start the work
  parallelReduce(0, x.length(), sum);

  // return the computed sum
  return sum.value;
}

struct SquareRoot : public Worker
{
  // source matrix
  const RMatrix<double> input;

  // destination matrix
  RMatrix<double> output;

  // initialize with source and destination
  SquareRoot(const NumericMatrix input, NumericMatrix output)
    : input(input), output(output) {}

  // take the square root of the range of elements requested
  void operator()(std::size_t begin, std::size_t end) {
    std::transform(input.begin() + begin,
                   input.begin() + end,
                   output.begin() + begin,
                   ::sqrt);
  }
};

//' @export
// [[Rcpp::export]]
NumericMatrix parallelMatrixSqrt(NumericMatrix x) {

  // allocate the output matrix
  NumericMatrix output(x.nrow(), x.ncol());

  // SquareRoot functor (pass input and output matrixes)
  SquareRoot squareRoot(x, output);

  // call parallelFor to do the work
  parallelFor(0, x.length(), squareRoot);

  // return the output matrix
  return output;
}


/////////////////////////////////////////////////////////////////
// PfSI: Calculate State Space Occupancy Vector
/////////////////////////////////////////////////////////////////


// inline int size(NumericVector xx) {
//   return(xx.size());
// }
//
// struct ListTest : public Worker
// {
//
//   // source history
//   const RcppParallel::RVector<double> input;
//
//   // destination matrix
//   // RcppParallel::RMatrix<double> output;
//   RcppParallel::RVector<int> output;
//
//   //initialize with source and destination
//   ListTest(const NumericVector input, Rcpp::IntegerVector output)
//     : input(input), output(output) {}
//
//   // only work on the elements of input I need
//   void operator()(std::size_t begin, std::size_t end){
//     // write to output
//     std::transform(input.begin()+begin,
//                    input.begin()+end,
//                    output.begin()+begin,
//                    size);
//   }
//
// };
//
// //' @export
// // [[Rcpp::export]]
// IntegerVector listTestFun(Rcpp::NumericVector x){
//
//   // allocate output vector
//   Rcpp::IntegerVector output(x.size());
//
//   // listTest functor (pass input and output objects)
//   ListTest listTest(x, output);
//
//   // call parallelFor to do the work
//   RcppParallel::parallelFor(0, x.size(), listTest);
//
//   // return the output vector
//   return output;
// }
