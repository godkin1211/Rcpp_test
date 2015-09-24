/*
 * =====================================================================================
 *
 *       Filename:  fib_local.cpp
 *
 *    Description:  Testing of Rcpp
 *
 *        Version:  1.0
 *        Created:  2015年09月21日 15點26分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Godkin Chiachun Chiu (GCC), jiajyun.ciou@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <Rcpp.h>
#include <algorithm>
#include <vector>
#include <stdexcept>
#include <cmath>
#include <iostream>

class Fib {
	public:
		Fib(unsigned int n = 1000) {
			memo.resize(n);
			std::fill(memo.begin(), memo.end(), NAN);
			memo[0] = 0.0;
			momo[1] = 1.0;
		}

		double fibnacci(int x) {
			if (x < 0)
				return ( (double) NAN );
			if (x >= (int) memo.size())
				throw std::range_error(\" x is too large for implementation\");
			if (! ::isnan(memo[x]))
				return(memo[x]);
			memo[x] = fibnacci(x-2) + fibnacci(x-1);
			return(memo[x]);
		}
	private:
		std::vector <double> memo;
};


