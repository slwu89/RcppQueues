## ----setup, include=FALSE------------------------------------------------
knitr::opts_chunk$set(echo = TRUE)

## ------------------------------------------------------------------------
library(microbenchmark)
library(RcppQueues)
addRcppMethod()
xx = testClass$new(500)
microbenchmark(xx$testMethod(),xx$testMethodCpp())

