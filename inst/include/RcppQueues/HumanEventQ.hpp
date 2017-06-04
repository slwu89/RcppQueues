#ifndef _RCPPQUEUES_HUMANEVENTQ_HPP_
#define _RCPPQUEUES_HUMANEVENTQ_HPP_

#include <Rcpp.h>

namespace RcppQueues {

  typedef struct {
    double tEvent;
    Rcpp::RObject PAR;
    char tag;
  } HumanEvent;

class HumanEventQ {
public:
  // constructor
  // HumanEventQ();
  HumanEventQ(const int &initQ){
    std::vector<int> EventQ;
    EventQ.reserve(initQ);

    EventQreal.reserve(initQ);
  }

  // push
  void push_Event(const int &Event){
    EventQ.push_back(Event);
  };

  // get first
  void front_Event(){
    Rcpp::Rcout << EventQ.front() << std::endl;;
  };



  // fake queue
  std::vector<int> EventQ;

  // better queue
  std::vector<HumanEvent> EventQreal;

};





}


#endif
