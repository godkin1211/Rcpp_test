/*
 * =====================================================================================
 *
 *       Filename:  fib.cpp
 *
 *    Description:  Testing of Rcpp
 *
 *        Version:  1.0
 *        Created:  2015年09月21日 15點08分20秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Godkin Chiachun Chiu (GCC), jiajyun.ciou@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <Rcpp.h>

using namespace Rcpp;

// [[Rcpp::export]]
int fibCpp (const int x)
{
	if (x < 2)
		return x;
	else
		return (fibCpp(x-1) + fibCpp(x-2));
}
