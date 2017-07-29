#ifndef _RCPPQUEUES_MOSYPOP_HPP_
#define _RCPPQUEUES_MOSYPOP_HPP_

#include <Rcpp.h>

namespace RcppQueues {

class MosquitoPop{
public:
  // constructor
  MosquitoPop(const int &N = 1000);


private:
  std::list<Rcpp::Environment> Pop;

};

inline MosquitoPop::MosquitoPop(const int &N){
  Pop.reserve(N);
};

}

#endif
