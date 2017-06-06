/////////////////////////////////////////////////////////////////
//
//   RcppQueues
//   Test Methods for Using Rcpp Methods in Object
//   Classes defined in R/testClasses.R
//   Sean Wu
//   June 5, 2017
//
/////////////////////////////////////////////////////////////////

#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]

using namespace Rcpp;

// //' Test method for \code{\link{testClass}}
// //'
// //' Multiplies two matrix together and returns result; should be equivalent to \code{testClass$testMethod()}
// //' @export
// // [[Rcpp::export]]
// NumericMatrix testMethodCpp(Rcpp::Environment testClassEnv) {
//   // Rcpp::Environment testClassEnv = Rcpp::Environment("private");
//   return(Rcpp::wrap(Rcpp::as<arma::mat>(testClassEnv["matrix1"]) * Rcpp::as<arma::mat>(testClassEnv["matrix2"])));
// }

//' Test method for \code{\link{testClass}}
//'
//' Multiplies two matrix together and returns result; should be equivalent to \code{testClass$testMethod()}
//' @export
// [[Rcpp::export]]
arma::mat testMethodCpp(Rcpp::Environment testClassEnv) {
  // Rcpp::Environment testClassEnv = Rcpp::Environment("private");
  return(Rcpp::as<arma::mat>(testClassEnv["matrix1"]) * Rcpp::as<arma::mat>(testClassEnv["matrix2"]));
}


