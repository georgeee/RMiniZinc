// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// get_missing_pars
Rcpp::CharacterVector get_missing_pars(std::string modelString, std::string mznpath, std::string modelStringName, Nullable<std::vector<std::string>> includePath);
RcppExport SEXP _rminizinc_get_missing_pars(SEXP modelStringSEXP, SEXP mznpathSEXP, SEXP modelStringNameSEXP, SEXP includePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type modelString(modelStringSEXP);
    Rcpp::traits::input_parameter< std::string >::type mznpath(mznpathSEXP);
    Rcpp::traits::input_parameter< std::string >::type modelStringName(modelStringNameSEXP);
    Rcpp::traits::input_parameter< Nullable<std::vector<std::string>> >::type includePath(includePathSEXP);
    rcpp_result_gen = Rcpp::wrap(get_missing_pars(modelString, mznpath, modelStringName, includePath));
    return rcpp_result_gen;
END_RCPP
}
// mzn_eval
List mzn_eval(std::string solver, std::string libpath, std::string modelString, std::string mznpath, std::string dznpath, bool all_solutions, int time_limit);
RcppExport SEXP _rminizinc_mzn_eval(SEXP solverSEXP, SEXP libpathSEXP, SEXP modelStringSEXP, SEXP mznpathSEXP, SEXP dznpathSEXP, SEXP all_solutionsSEXP, SEXP time_limitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type solver(solverSEXP);
    Rcpp::traits::input_parameter< std::string >::type libpath(libpathSEXP);
    Rcpp::traits::input_parameter< std::string >::type modelString(modelStringSEXP);
    Rcpp::traits::input_parameter< std::string >::type mznpath(mznpathSEXP);
    Rcpp::traits::input_parameter< std::string >::type dznpath(dznpathSEXP);
    Rcpp::traits::input_parameter< bool >::type all_solutions(all_solutionsSEXP);
    Rcpp::traits::input_parameter< int >::type time_limit(time_limitSEXP);
    rcpp_result_gen = Rcpp::wrap(mzn_eval(solver, libpath, modelString, mznpath, dznpath, all_solutions, time_limit));
    return rcpp_result_gen;
END_RCPP
}
// mzn_parse
List mzn_parse(std::string modelString, std::string mznpath, std::string modelStringName, Nullable<std::vector<std::string>> includePath);
RcppExport SEXP _rminizinc_mzn_parse(SEXP modelStringSEXP, SEXP mznpathSEXP, SEXP modelStringNameSEXP, SEXP includePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type modelString(modelStringSEXP);
    Rcpp::traits::input_parameter< std::string >::type mznpath(mznpathSEXP);
    Rcpp::traits::input_parameter< std::string >::type modelStringName(modelStringNameSEXP);
    Rcpp::traits::input_parameter< Nullable<std::vector<std::string>> >::type includePath(includePathSEXP);
    rcpp_result_gen = Rcpp::wrap(mzn_parse(modelString, mznpath, modelStringName, includePath));
    return rcpp_result_gen;
END_RCPP
}
// set_params
std::string set_params(List modData, std::string modelString, std::string mznpath, bool modify_mzn, Nullable<std::vector<std::string>> includePath);
RcppExport SEXP _rminizinc_set_params(SEXP modDataSEXP, SEXP modelStringSEXP, SEXP mznpathSEXP, SEXP modify_mznSEXP, SEXP includePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type modData(modDataSEXP);
    Rcpp::traits::input_parameter< std::string >::type modelString(modelStringSEXP);
    Rcpp::traits::input_parameter< std::string >::type mznpath(mznpathSEXP);
    Rcpp::traits::input_parameter< bool >::type modify_mzn(modify_mznSEXP);
    Rcpp::traits::input_parameter< Nullable<std::vector<std::string>> >::type includePath(includePathSEXP);
    rcpp_result_gen = Rcpp::wrap(set_params(modData, modelString, mznpath, modify_mzn, includePath));
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
    {"_rminizinc_get_missing_pars", (DL_FUNC) &_rminizinc_get_missing_pars, 4},
    {"_rminizinc_mzn_eval", (DL_FUNC) &_rminizinc_mzn_eval, 7},
    {"_rminizinc_mzn_parse", (DL_FUNC) &_rminizinc_mzn_parse, 4},
    {"_rminizinc_set_params", (DL_FUNC) &_rminizinc_set_params, 5},
    {"_rminizinc_sol_parse", (DL_FUNC) &_rminizinc_sol_parse, 1},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_rminizinc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
