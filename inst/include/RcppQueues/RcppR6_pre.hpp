// Generated by RcppR6 (0.2.4): do not edit by hand
#ifndef _RCPPQUEUES_RCPPR6_PRE_HPP_
#define _RCPPQUEUES_RCPPR6_PRE_HPP_

#include <RcppCommon.h>


namespace RcppQueues {
namespace RcppR6 {
template <typename T> class RcppR6;
}
}

namespace RcppQueues { class HumanEventQ; }

namespace Rcpp {
template <typename T> SEXP wrap(const RcppQueues::RcppR6::RcppR6<T>&);
namespace traits {
template <typename T> class Exporter<RcppQueues::RcppR6::RcppR6<T> >;
}

template <> SEXP wrap(const RcppQueues::HumanEventQ&);
template <> RcppQueues::HumanEventQ as(SEXP);
}

#endif
