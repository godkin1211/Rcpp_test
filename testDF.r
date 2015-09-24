mkdf <- '
	Rcpp::DataFrame dfin(input);
	Rcpp::DataFrame dfout;
	for (int i=0;i<dfin.length();i++) {
		dfout.push_back(dfin(i));
	}
	return Rcpp::DataFrame::create( Named("x")= dfout(1), Named("y") = dfout(2));
'

library(inline)
test <- cxxfunction( signature(input="data.frame"), mkdf, plugin="Rcpp")

#test(input=head(iris))
