// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// bigwig.cpp
cpp11::writable::data_frame read_bigwig_impl(std::string bwfname, std::string chrom, int start, int end);
extern "C" SEXP _cpp11bigwig_read_bigwig_impl(SEXP bwfname, SEXP chrom, SEXP start, SEXP end) {
  BEGIN_CPP11
    return cpp11::as_sexp(read_bigwig_impl(cpp11::as_cpp<cpp11::decay_t<std::string>>(bwfname), cpp11::as_cpp<cpp11::decay_t<std::string>>(chrom), cpp11::as_cpp<cpp11::decay_t<int>>(start), cpp11::as_cpp<cpp11::decay_t<int>>(end)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_cpp11bigwig_read_bigwig_impl", (DL_FUNC) &_cpp11bigwig_read_bigwig_impl, 4},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_cpp11bigwig(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
