// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/later.h"
#include <Rcpp.h>

using namespace Rcpp;

// testCallbackOrdering
void testCallbackOrdering();
RcppExport SEXP _later_testCallbackOrdering() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    testCallbackOrdering();
    return R_NilValue;
END_RCPP
}
// log_level
std::string log_level(std::string level);
RcppExport SEXP _later_log_level(SEXP levelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type level(levelSEXP);
    rcpp_result_gen = Rcpp::wrap(log_level(level));
    return rcpp_result_gen;
END_RCPP
}
// ensureInitialized
void ensureInitialized();
RcppExport SEXP _later_ensureInitialized() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    ensureInitialized();
    return R_NilValue;
END_RCPP
}
// existsCallbackRegistry
bool existsCallbackRegistry(int loop);
RcppExport SEXP _later_existsCallbackRegistry(SEXP loopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type loop(loopSEXP);
    rcpp_result_gen = Rcpp::wrap(existsCallbackRegistry(loop));
    return rcpp_result_gen;
END_RCPP
}
// createCallbackRegistry
bool createCallbackRegistry(int loop);
RcppExport SEXP _later_createCallbackRegistry(SEXP loopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type loop(loopSEXP);
    rcpp_result_gen = Rcpp::wrap(createCallbackRegistry(loop));
    return rcpp_result_gen;
END_RCPP
}
// deleteCallbackRegistry
bool deleteCallbackRegistry(int loop);
RcppExport SEXP _later_deleteCallbackRegistry(SEXP loopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type loop(loopSEXP);
    rcpp_result_gen = Rcpp::wrap(deleteCallbackRegistry(loop));
    return rcpp_result_gen;
END_RCPP
}
// list_queue_
Rcpp::List list_queue_(int loop);
RcppExport SEXP _later_list_queue_(SEXP loopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type loop(loopSEXP);
    rcpp_result_gen = Rcpp::wrap(list_queue_(loop));
    return rcpp_result_gen;
END_RCPP
}
// execCallbacks
bool execCallbacks(double timeoutSecs, bool runAll, int loop);
RcppExport SEXP _later_execCallbacks(SEXP timeoutSecsSEXP, SEXP runAllSEXP, SEXP loopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type timeoutSecs(timeoutSecsSEXP);
    Rcpp::traits::input_parameter< bool >::type runAll(runAllSEXP);
    Rcpp::traits::input_parameter< int >::type loop(loopSEXP);
    rcpp_result_gen = Rcpp::wrap(execCallbacks(timeoutSecs, runAll, loop));
    return rcpp_result_gen;
END_RCPP
}
// idle
bool idle(int loop);
RcppExport SEXP _later_idle(SEXP loopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type loop(loopSEXP);
    rcpp_result_gen = Rcpp::wrap(idle(loop));
    return rcpp_result_gen;
END_RCPP
}
// execLater
std::string execLater(Rcpp::Function callback, double delaySecs, int loop);
RcppExport SEXP _later_execLater(SEXP callbackSEXP, SEXP delaySecsSEXP, SEXP loopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Function >::type callback(callbackSEXP);
    Rcpp::traits::input_parameter< double >::type delaySecs(delaySecsSEXP);
    Rcpp::traits::input_parameter< int >::type loop(loopSEXP);
    rcpp_result_gen = Rcpp::wrap(execLater(callback, delaySecs, loop));
    return rcpp_result_gen;
END_RCPP
}
// cancel
bool cancel(std::string callback_id_s, int loop);
RcppExport SEXP _later_cancel(SEXP callback_id_sSEXP, SEXP loopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type callback_id_s(callback_id_sSEXP);
    Rcpp::traits::input_parameter< int >::type loop(loopSEXP);
    rcpp_result_gen = Rcpp::wrap(cancel(callback_id_s, loop));
    return rcpp_result_gen;
END_RCPP
}
// nextOpSecs
double nextOpSecs(int loop);
RcppExport SEXP _later_nextOpSecs(SEXP loopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type loop(loopSEXP);
    rcpp_result_gen = Rcpp::wrap(nextOpSecs(loop));
    return rcpp_result_gen;
END_RCPP
}
