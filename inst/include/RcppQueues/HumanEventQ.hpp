#ifndef _RCPPQUEUES_HUMANEVENTQ_HPP_
#define _RCPPQUEUES_HUMANEVENTQ_HPP_

#include <Rcpp.h>

namespace RcppQueues {

// comparator funcion for sorting events by 'tEvent'
inline bool compare_tEvent(const Rcpp::List& eventA, const Rcpp::List& eventB) { return double(eventA["tEvent"]) < double(eventB["tEvent"]); }

class HumanEventQ {
public:
  // constructor
  HumanEventQ(const int &initQ){
    EventQ.reserve(initQ);
    EventQ.push_back(Rcpp::List::create(Rcpp::Named("tEvent")=73000,Rcpp::Named("PAR")=R_NilValue,Rcpp::Named("tag")="death"));
  }

  // return first event as list
  Rcpp::List firstEvent(){
    return(EventQ.front());
  };

  // remove first event from queue
  void rmFirstEventFromQ(){
    EventQ.erase(EventQ.begin());
    queueN -= 1;
  };

  // get current number of events in queue
  int get_queueN(){
    return(queueN);
  };

  // get entire event queue
  Rcpp::List get_eventQ(){
    return(Rcpp::wrap(EventQ));
  };

  // add an event to the queue and re-sort the queue
  void addEvent2Q(const Rcpp::List &event){
    EventQ.push_back(event);
    std::sort(EventQ.begin(), EventQ.end(), compare_tEvent);
    queueN += 1;
  };

private:
  std::vector<Rcpp::List> EventQ; // event queue
  int queueN = 1; // number of events in queue
};

}

#endif
