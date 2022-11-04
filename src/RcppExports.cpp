// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "tfevents_types.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// event_writer
Rcpp::XPtr<EventWriter> event_writer(std::string file);
RcppExport SEXP _tfevents_event_writer(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(event_writer(file));
    return rcpp_result_gen;
END_RCPP
}
// flush_event_writer
void flush_event_writer(Rcpp::XPtr<EventWriter> writer);
RcppExport SEXP _tfevents_flush_event_writer(SEXP writerSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<EventWriter> >::type writer(writerSEXP);
    flush_event_writer(writer);
    return R_NilValue;
END_RCPP
}
// write_scalar
bool write_scalar(Rcpp::XPtr<EventWriter> writer, const std::string& name, float data, int64_t step, const std::string& description, const std::string& display_name);
RcppExport SEXP _tfevents_write_scalar(SEXP writerSEXP, SEXP nameSEXP, SEXP dataSEXP, SEXP stepSEXP, SEXP descriptionSEXP, SEXP display_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<EventWriter> >::type writer(writerSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    Rcpp::traits::input_parameter< float >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int64_t >::type step(stepSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type description(descriptionSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type display_name(display_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(write_scalar(writer, name, data, step, description, display_name));
    return rcpp_result_gen;
END_RCPP
}
// write_image
bool write_image(Rcpp::XPtr<EventWriter> writer, const std::string& name, int64_t step, const Rcpp::RawVector& buffer, const int& width, const int& height, const int& depth, const std::string& description, const std::string& display_name);
RcppExport SEXP _tfevents_write_image(SEXP writerSEXP, SEXP nameSEXP, SEXP stepSEXP, SEXP bufferSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP depthSEXP, SEXP descriptionSEXP, SEXP display_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<EventWriter> >::type writer(writerSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type step(stepSEXP);
    Rcpp::traits::input_parameter< const Rcpp::RawVector& >::type buffer(bufferSEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const int& >::type height(heightSEXP);
    Rcpp::traits::input_parameter< const int& >::type depth(depthSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type description(descriptionSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type display_name(display_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(write_image(writer, name, step, buffer, width, height, depth, description, display_name));
    return rcpp_result_gen;
END_RCPP
}
// unload_protobuf
void unload_protobuf();
RcppExport SEXP _tfevents_unload_protobuf() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    unload_protobuf();
    return R_NilValue;
END_RCPP
}
// testfun
tensorboard::Event testfun(std::vector<tensorboard::Event> x);
RcppExport SEXP _tfevents_testfun(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<tensorboard::Event> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(testfun(x));
    return rcpp_result_gen;
END_RCPP
}
// create_event_file_iterator
Rcpp::XPtr<EventFileIterator> create_event_file_iterator(const std::string& path);
RcppExport SEXP _tfevents_create_event_file_iterator(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(create_event_file_iterator(path));
    return rcpp_result_gen;
END_RCPP
}
// event_file_iterator_next
tfevents::Event event_file_iterator_next(Rcpp::XPtr<EventFileIterator> iter);
RcppExport SEXP _tfevents_event_file_iterator_next(SEXP iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<EventFileIterator> >::type iter(iterSEXP);
    rcpp_result_gen = Rcpp::wrap(event_file_iterator_next(iter));
    return rcpp_result_gen;
END_RCPP
}
// event_file_iterator_collect
std::vector<tfevents::Event> event_file_iterator_collect(const std::string& path);
RcppExport SEXP _tfevents_event_file_iterator_collect(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(event_file_iterator_collect(path));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_tfevents_event_writer", (DL_FUNC) &_tfevents_event_writer, 1},
    {"_tfevents_flush_event_writer", (DL_FUNC) &_tfevents_flush_event_writer, 1},
    {"_tfevents_write_scalar", (DL_FUNC) &_tfevents_write_scalar, 6},
    {"_tfevents_write_image", (DL_FUNC) &_tfevents_write_image, 9},
    {"_tfevents_unload_protobuf", (DL_FUNC) &_tfevents_unload_protobuf, 0},
    {"_tfevents_testfun", (DL_FUNC) &_tfevents_testfun, 1},
    {"_tfevents_create_event_file_iterator", (DL_FUNC) &_tfevents_create_event_file_iterator, 1},
    {"_tfevents_event_file_iterator_next", (DL_FUNC) &_tfevents_event_file_iterator_next, 1},
    {"_tfevents_event_file_iterator_collect", (DL_FUNC) &_tfevents_event_file_iterator_collect, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_tfevents(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
