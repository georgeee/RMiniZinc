// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mzn_eval
List mzn_eval(std::string modelString, std::string solver, std::string libpath, std::string dznpath);
RcppExport SEXP _rminizinc_mzn_eval(SEXP modelStringSEXP, SEXP solverSEXP, SEXP libpathSEXP, SEXP dznpathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type modelString(modelStringSEXP);
    Rcpp::traits::input_parameter< std::string >::type solver(solverSEXP);
    Rcpp::traits::input_parameter< std::string >::type libpath(libpathSEXP);
    Rcpp::traits::input_parameter< std::string >::type dznpath(dznpathSEXP);
    rcpp_result_gen = Rcpp::wrap(mzn_eval(modelString, solver, libpath, dznpath));
    return rcpp_result_gen;
END_RCPP
}
// mzn_parse
List mzn_parse(std::string modelString, std::string mznfilename, std::string modelStringName);
RcppExport SEXP _rminizinc_mzn_parse(SEXP modelStringSEXP, SEXP mznfilenameSEXP, SEXP modelStringNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type modelString(modelStringSEXP);
    Rcpp::traits::input_parameter< std::string >::type mznfilename(mznfilenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type modelStringName(modelStringNameSEXP);
    rcpp_result_gen = Rcpp::wrap(mzn_parse(modelString, mznfilename, modelStringName));
    return rcpp_result_gen;
END_RCPP
}
// set_params
std::string set_params(List modData, std::string modelString);
RcppExport SEXP _rminizinc_set_params(SEXP modDataSEXP, SEXP modelStringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type modData(modDataSEXP);
    Rcpp::traits::input_parameter< std::string >::type modelString(modelStringSEXP);
    rcpp_result_gen = Rcpp::wrap(set_params(modData, modelString));
    return rcpp_result_gen;
END_RCPP
}
// sol_parse
List sol_parse(std::string solutionString);
RcppExport SEXP _rminizinc_sol_parse(SEXP solutionStringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type solutionString(solutionStringSEXP);
    rcpp_result_gen = Rcpp::wrap(sol_parse(solutionString));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP run_testthat_tests();

static const R_CallMethodDef CallEntries[] = {
    {"_rminizinc_mzn_eval", (DL_FUNC) &_rminizinc_mzn_eval, 4},
    {"_rminizinc_mzn_parse", (DL_FUNC) &_rminizinc_mzn_parse, 3},
    {"_rminizinc_set_params", (DL_FUNC) &_rminizinc_set_params, 2},
    {"_rminizinc_sol_parse", (DL_FUNC) &_rminizinc_sol_parse, 1},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_rminizinc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
