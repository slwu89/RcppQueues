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
    // std::vector<int> EventQ;
    EventQ.reserve(initQ);

    EventQreal.reserve(initQ);

    EventQlist.reserve(initQ);
  }

  // push
  void push_Event(const int &Event){
    EventQ.push_back(Event);
  };

  // get first
  void front_Event(){
    Rcpp::Rcout << EventQ.front() << std::endl;;
  };

  void push_eventReal(const double &tEvent, const Rcpp::RObject &PAR, const char &tag){
    HumanEvent event = {tEvent, PAR, tag};
    EventQreal.push_back(event);
  };

  // fake queue
  std::vector<int> EventQ;

  // better queue
  std::vector<HumanEvent> EventQreal;


  // void addEvent2Q(const Rcpp::List &event){
  //   Rcpp::Rcout << "hi " << event[1] << std::endl;
  // };

  // queue with Rcpp::list
  std::vector<Rcpp::List> EventQlist;
  // size of Q
  int queueN = 0;

};





}


#endif
