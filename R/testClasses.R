#################################################################
#
#   RcppQueues
#   Test Class for Using Rcpp Methods in Object
#   Methods defined in src/testMethods.cpp
#   Sean Wu
#   June 5, 2017
#
#################################################################

#' Test Class for Testing Rcpp Methods in Object
#'
#' Class for testing
#'
#' @docType class
#' @format An \code{\link{R6Class}} generator object
#' @keywords R6 class
#'
#' @section Methods:
#'  * **Constructor**
#'    * new: initialize a new \code{testClass} object
#'      * Arguments:
#'        * \code{N}: size of matrix
#'  * **Methods**
#'    * testMethod: multiply the two matrix and return result
#' @md
#' @export
testClass <- R6::R6Class(classname = "testClass",
                         portable = TRUE,
                         cloneable = FALSE,
                         lock_class = FALSE,
                         lock_objects = FALSE,

                         # public members
                         public = list(

                           #################################################
                           # Initialize
                           #################################################

                           initialize = function(N){
                             private$matrix1 = matrix(rlnorm(n=N*N),nrow = N,ncol = N)
                             private$matrix2 = matrix(rlnorm(n=N*N),nrow = N,ncol = N)
                             self$publicField = N
                           },

                           testMethod = function(){
                             return(private$matrix1 %*% private$matrix2)
                           },

                           publicField = NULL

                         ),

                         # private members
                         private = list(

                           matrix1 = NULL,
                           matrix2 = NULL

                         )
)

#' Add Rcpp Method in \code{\link{testClass}}
#'
#' Method for testing
#'
#' @param overwrite overwrite methods of the name name?
#'
#' @export
addRcppMethod <- function(overwrite = TRUE){

  testClass$set(name = "testMethodCpp",which = "public",
                value = function(){
                  testMethodCpp(testClassEnv = private)
                  },overwrite = overwrite
  )

  testClass$set(name = "testPublicCpp",which = "public",
                value = function(){
                  testPublicCpp(self)
                },
                overwrite = overwrite
  )

  testClass$set(name = "testSearchPath",which = "public",
                value = testSearchPath,
                overwrite = overwrite
  )

}
