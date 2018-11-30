// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mine_compute
double mine_compute(NumericVector x, NumericVector y, double alpha, double C, String EST, int measure, double eps, double p, bool norm);
RcppExport SEXP _minerva_mine_compute(SEXP xSEXP, SEXP ySEXP, SEXP alphaSEXP, SEXP CSEXP, SEXP ESTSEXP, SEXP measureSEXP, SEXP epsSEXP, SEXP pSEXP, SEXP normSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type C(CSEXP);
    Rcpp::traits::input_parameter< String >::type EST(ESTSEXP);
    Rcpp::traits::input_parameter< int >::type measure(measureSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type norm(normSEXP);
    rcpp_result_gen = Rcpp::wrap(mine_compute(x, y, alpha, C, EST, measure, eps, p, norm));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP mineRall(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP mineRonevar(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_minerva_mine_compute", (DL_FUNC) &_minerva_mine_compute, 9},
    {"mineRall",              (DL_FUNC) &mineRall,              7},
    {"mineRonevar",           (DL_FUNC) &mineRonevar,           6},
    {NULL, NULL, 0}
};

RcppExport void R_init_minerva(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
