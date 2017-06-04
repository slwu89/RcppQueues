// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppQueues.h"
#include <Rcpp.h>

using namespace Rcpp;

// uniform__ctor
RcppQueues::Uniform uniform__ctor(double min, double max);
RcppExport SEXP RcppQueues_uniform__ctor(SEXP minSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(uniform__ctor(min, max));
    return rcpp_result_gen;
END_RCPP
}
// uniform__draw
Rcpp::NumericVector uniform__draw(RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> obj_, int n);
RcppExport SEXP RcppQueues_uniform__draw(SEXP obj_SEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> >::type obj_(obj_SEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(uniform__draw(obj_, n));
    return rcpp_result_gen;
END_RCPP
}
// uniform__range
double uniform__range(RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> obj_);
RcppExport SEXP RcppQueues_uniform__range(SEXP obj_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> >::type obj_(obj_SEXP);
    rcpp_result_gen = Rcpp::wrap(uniform__range(obj_));
    return rcpp_result_gen;
END_RCPP
}
// uniform__min__get
double uniform__min__get(RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> obj_);
RcppExport SEXP RcppQueues_uniform__min__get(SEXP obj_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> >::type obj_(obj_SEXP);
    rcpp_result_gen = Rcpp::wrap(uniform__min__get(obj_));
    return rcpp_result_gen;
END_RCPP
}
// uniform__max__get
double uniform__max__get(RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> obj_);
RcppExport SEXP RcppQueues_uniform__max__get(SEXP obj_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> >::type obj_(obj_SEXP);
    rcpp_result_gen = Rcpp::wrap(uniform__max__get(obj_));
    return rcpp_result_gen;
END_RCPP
}
// uniform__the_min__get
double uniform__the_min__get(RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> obj_);
RcppExport SEXP RcppQueues_uniform__the_min__get(SEXP obj_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> >::type obj_(obj_SEXP);
    rcpp_result_gen = Rcpp::wrap(uniform__the_min__get(obj_));
    return rcpp_result_gen;
END_RCPP
}
// uniform__the_min__set
void uniform__the_min__set(RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> obj_, double value);
RcppExport SEXP RcppQueues_uniform__the_min__set(SEXP obj_SEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> >::type obj_(obj_SEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    uniform__the_min__set(obj_, value);
    return R_NilValue;
END_RCPP
}
// uniform__the_max__get
double uniform__the_max__get(RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> obj_);
RcppExport SEXP RcppQueues_uniform__the_max__get(SEXP obj_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> >::type obj_(obj_SEXP);
    rcpp_result_gen = Rcpp::wrap(uniform__the_max__get(obj_));
    return rcpp_result_gen;
END_RCPP
}
// uniform__the_max__set
void uniform__the_max__set(RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> obj_, double value);
RcppExport SEXP RcppQueues_uniform__the_max__set(SEXP obj_SEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> >::type obj_(obj_SEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    uniform__the_max__set(obj_, value);
    return R_NilValue;
END_RCPP
}
// uniform__u__get
Rcpp::NumericVector uniform__u__get(RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> obj_);
RcppExport SEXP RcppQueues_uniform__u__get(SEXP obj_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::Uniform> >::type obj_(obj_SEXP);
    rcpp_result_gen = Rcpp::wrap(uniform__u__get(obj_));
    return rcpp_result_gen;
END_RCPP
}
// stack__ctor
RcppQueues::stack stack__ctor();
RcppExport SEXP RcppQueues_stack__ctor() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(stack__ctor());
    return rcpp_result_gen;
END_RCPP
}
// stack__pop
void stack__pop(RcppQueues::RcppR6::RcppR6<RcppQueues::stack> obj_);
RcppExport SEXP RcppQueues_stack__pop(SEXP obj_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::stack> >::type obj_(obj_SEXP);
    stack__pop(obj_);
    return R_NilValue;
END_RCPP
}
// stack__push
void stack__push(RcppQueues::RcppR6::RcppR6<RcppQueues::stack> obj_, int x);
RcppExport SEXP RcppQueues_stack__push(SEXP obj_SEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::stack> >::type obj_(obj_SEXP);
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    stack__push(obj_, x);
    return R_NilValue;
END_RCPP
}
// stack__equals
bool stack__equals(RcppQueues::RcppR6::RcppR6<RcppQueues::stack> obj_, RcppQueues::stack other);
RcppExport SEXP RcppQueues_stack__equals(SEXP obj_SEXP, SEXP otherSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::stack> >::type obj_(obj_SEXP);
    Rcpp::traits::input_parameter< RcppQueues::stack >::type other(otherSEXP);
    rcpp_result_gen = Rcpp::wrap(stack__equals(obj_, other));
    return rcpp_result_gen;
END_RCPP
}
// stack__differs
bool stack__differs(RcppQueues::RcppR6::RcppR6<RcppQueues::stack> obj_, RcppQueues::stack other);
RcppExport SEXP RcppQueues_stack__differs(SEXP obj_SEXP, SEXP otherSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::stack> >::type obj_(obj_SEXP);
    Rcpp::traits::input_parameter< RcppQueues::stack >::type other(otherSEXP);
    rcpp_result_gen = Rcpp::wrap(stack__differs(obj_, other));
    return rcpp_result_gen;
END_RCPP
}
// stack__empty__get
bool stack__empty__get(RcppQueues::RcppR6::RcppR6<RcppQueues::stack> obj_);
RcppExport SEXP RcppQueues_stack__empty__get(SEXP obj_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::stack> >::type obj_(obj_SEXP);
    rcpp_result_gen = Rcpp::wrap(stack__empty__get(obj_));
    return rcpp_result_gen;
END_RCPP
}
// stack__size__get
size_t stack__size__get(RcppQueues::RcppR6::RcppR6<RcppQueues::stack> obj_);
RcppExport SEXP RcppQueues_stack__size__get(SEXP obj_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::stack> >::type obj_(obj_SEXP);
    rcpp_result_gen = Rcpp::wrap(stack__size__get(obj_));
    return rcpp_result_gen;
END_RCPP
}
// stack__top__get
int stack__top__get(RcppQueues::RcppR6::RcppR6<RcppQueues::stack> obj_);
RcppExport SEXP RcppQueues_stack__top__get(SEXP obj_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::stack> >::type obj_(obj_SEXP);
    rcpp_result_gen = Rcpp::wrap(stack__top__get(obj_));
    return rcpp_result_gen;
END_RCPP
}
// empty__ctor
RcppQueues::empty empty__ctor();
RcppExport SEXP RcppQueues_empty__ctor() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(empty__ctor());
    return rcpp_result_gen;
END_RCPP
}
// HumanEventQ__ctor
RcppQueues::HumanEventQ HumanEventQ__ctor(int initQ);
RcppExport SEXP RcppQueues_HumanEventQ__ctor(SEXP initQSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type initQ(initQSEXP);
    rcpp_result_gen = Rcpp::wrap(HumanEventQ__ctor(initQ));
    return rcpp_result_gen;
END_RCPP
}
// HumanEventQ__push_Event
void HumanEventQ__push_Event(RcppQueues::RcppR6::RcppR6<RcppQueues::HumanEventQ> obj_, int Event);
RcppExport SEXP RcppQueues_HumanEventQ__push_Event(SEXP obj_SEXP, SEXP EventSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::HumanEventQ> >::type obj_(obj_SEXP);
    Rcpp::traits::input_parameter< int >::type Event(EventSEXP);
    HumanEventQ__push_Event(obj_, Event);
    return R_NilValue;
END_RCPP
}
// HumanEventQ__front_Event
void HumanEventQ__front_Event(RcppQueues::RcppR6::RcppR6<RcppQueues::HumanEventQ> obj_);
RcppExport SEXP RcppQueues_HumanEventQ__front_Event(SEXP obj_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RcppQueues::RcppR6::RcppR6<RcppQueues::HumanEventQ> >::type obj_(obj_SEXP);
    HumanEventQ__front_Event(obj_);
    return R_NilValue;
END_RCPP
}
// timesTwo
NumericVector timesTwo(NumericVector x);
RcppExport SEXP RcppQueues_timesTwo(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(timesTwo(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"RcppQueues_uniform__ctor", (DL_FUNC) &RcppQueues_uniform__ctor, 2},
    {"RcppQueues_uniform__draw", (DL_FUNC) &RcppQueues_uniform__draw, 2},
    {"RcppQueues_uniform__range", (DL_FUNC) &RcppQueues_uniform__range, 1},
    {"RcppQueues_uniform__min__get", (DL_FUNC) &RcppQueues_uniform__min__get, 1},
    {"RcppQueues_uniform__max__get", (DL_FUNC) &RcppQueues_uniform__max__get, 1},
    {"RcppQueues_uniform__the_min__get", (DL_FUNC) &RcppQueues_uniform__the_min__get, 1},
    {"RcppQueues_uniform__the_min__set", (DL_FUNC) &RcppQueues_uniform__the_min__set, 2},
    {"RcppQueues_uniform__the_max__get", (DL_FUNC) &RcppQueues_uniform__the_max__get, 1},
    {"RcppQueues_uniform__the_max__set", (DL_FUNC) &RcppQueues_uniform__the_max__set, 2},
    {"RcppQueues_uniform__u__get", (DL_FUNC) &RcppQueues_uniform__u__get, 1},
    {"RcppQueues_stack__ctor", (DL_FUNC) &RcppQueues_stack__ctor, 0},
    {"RcppQueues_stack__pop", (DL_FUNC) &RcppQueues_stack__pop, 1},
    {"RcppQueues_stack__push", (DL_FUNC) &RcppQueues_stack__push, 2},
    {"RcppQueues_stack__equals", (DL_FUNC) &RcppQueues_stack__equals, 2},
    {"RcppQueues_stack__differs", (DL_FUNC) &RcppQueues_stack__differs, 2},
    {"RcppQueues_stack__empty__get", (DL_FUNC) &RcppQueues_stack__empty__get, 1},
    {"RcppQueues_stack__size__get", (DL_FUNC) &RcppQueues_stack__size__get, 1},
    {"RcppQueues_stack__top__get", (DL_FUNC) &RcppQueues_stack__top__get, 1},
    {"RcppQueues_empty__ctor", (DL_FUNC) &RcppQueues_empty__ctor, 0},
    {"RcppQueues_HumanEventQ__ctor", (DL_FUNC) &RcppQueues_HumanEventQ__ctor, 1},
    {"RcppQueues_HumanEventQ__push_Event", (DL_FUNC) &RcppQueues_HumanEventQ__push_Event, 2},
    {"RcppQueues_HumanEventQ__front_Event", (DL_FUNC) &RcppQueues_HumanEventQ__front_Event, 1},
    {"RcppQueues_timesTwo", (DL_FUNC) &RcppQueues_timesTwo, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppQueues(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
