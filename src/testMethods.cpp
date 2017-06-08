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


//' Test method for \code{\link{testClass}}
//'
//' Multiplies two matrix together and returns result; should be equivalent to \code{testClass$testMethod()}
//' @export
// [[Rcpp::export]]
arma::mat testMethodCpp(Rcpp::Environment testClassEnv) {
  // Rcpp::Environment testClassEnv = Rcpp::Environment("private");
  return(Rcpp::as<arma::mat>(testClassEnv["matrix1"]) * Rcpp::as<arma::mat>(testClassEnv["matrix2"]));
}

//' Test method for \code{\link{testClass}}
//'
//' grabs the public environment and prints out one of its values
//' @export
// [[Rcpp::export]]
void testPublicCpp(Rcpp::Environment publicEnv){
  double xx = publicEnv["publicField"];
  Rcpp::Rcout << "publicField: " << xx << std::endl;
}

//' @export
// [[Rcpp::export]]
void testSearchPath(int env){
  Rcpp::Environment callEnv = Rcpp::Environment(env);
  // double xx = callEnv["publicField"];
  Rcpp::Rcout << "publicField: " << callEnv.ls(true) << std::endl;
}
