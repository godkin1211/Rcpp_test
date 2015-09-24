#include <Rcpp.h>
using namespace Rcpp;
using namespace std;
// [[Rcpp::export]]
void hello()
{
	Rcout << "Hello world!" << endl;
	//return 0;
}
