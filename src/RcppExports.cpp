// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// bindist
Rcpp::List bindist(NumericMatrix binmat, NumericMatrix data);
RcppExport SEXP _FACkit_bindist(SEXP binmatSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type binmat(binmatSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(bindist(binmat, data));
    return rcpp_result_gen;
END_RCPP
}
// bingrow
NumericMatrix bingrow(double dthresh, int minpts, NumericMatrix data, int lmarkers, NumericMatrix oldbins, Rcpp::List ndist, Rcpp::List nlist, int growfact);
RcppExport SEXP _FACkit_bingrow(SEXP dthreshSEXP, SEXP minptsSEXP, SEXP dataSEXP, SEXP lmarkersSEXP, SEXP oldbinsSEXP, SEXP ndistSEXP, SEXP nlistSEXP, SEXP growfactSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type dthresh(dthreshSEXP);
    Rcpp::traits::input_parameter< int >::type minpts(minptsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type lmarkers(lmarkersSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type oldbins(oldbinsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type ndist(ndistSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type nlist(nlistSEXP);
    Rcpp::traits::input_parameter< int >::type growfact(growfactSEXP);
    rcpp_result_gen = Rcpp::wrap(bingrow(dthresh, minpts, data, lmarkers, oldbins, ndist, nlist, growfact));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_FACkit_bindist", (DL_FUNC) &_FACkit_bindist, 2},
    {"_FACkit_bingrow", (DL_FUNC) &_FACkit_bingrow, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_FACkit(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
