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
    EventQ.reserve(initQ);

    EventQlist.reserve(initQ);
    EventQlist.push_back(Rcpp::List::create(Rcpp::Named("tEvent")=73000,Rcpp::Named("PAR")=R_NilValue,Rcpp::Named("tag")="death"));
  }

  // push
  void push_Event(const int &Event){
    EventQ.push_back(Event);
  };

  // get first
  void front_Event(){
    Rcpp::Rcout << EventQ.front() << std::endl;;
  };



  // void addEvent2Q(const Rcpp::List &event){
  //
  // };
private:
  // queue with Rcpp::list
  std::vector<Rcpp::List> EventQlist;
  // size of Q
  int queueN = 0;

  // fake queue
  std::vector<int> EventQ;



};





}


#endif
