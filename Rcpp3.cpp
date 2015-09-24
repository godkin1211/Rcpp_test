#include <Rcpp.h>
using namespace Rcpp;

// Below is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar)

// For more on using Rcpp click the Help button on the editor toolbar

// [[Rcpp::export]]
int fibCpp(int x) {
   if (x == 0) return(0);
   if (x == 1) return(1);
   return (fibCpp(x - 1) + fibCpp(x - 2));
}
