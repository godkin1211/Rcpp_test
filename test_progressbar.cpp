//[[Rcpp::depends(RcppProgress)]]
#include <progress.hpp>
// [[Rcpp::export]]
double long_computation3(int nb, bool display_progress=true) {
	double sum = 0;
	Progress p(nb*nb, display_progress);
	for (int i = 0; i < nb; ++i) {
		if (Progress::check_abort() )
			return -1.0;
		for (int j = 0; j < nb; ++j) {
			p.increment(); // update progress
			sum += R::dlnorm(i+j, 0.0, 1.0, 0);
		}
	}
	return sum + nb;
}
