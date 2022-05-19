#include "Part.h"


//****************** PART CLASS  START ********************************
Part::Part(const string& name): name(name), installationDate(Date()), flighthours(0) {}

Part::~Part(){}

ostream& operator<<(ostream& ost, const Part& p){
  p.print(ost);
  return ost;
}

void Part::print(ostream& os) const{
    os << "Part: " << name << endl;
    os << "flightHours: " << flighthours <<endl;

  if(installationDate.getYear() == 1901){
    os << "Is not installed " << endl;
  }
  else{
      os << "Installation Date: " << installationDate;
  }

}
void Part::addFlightHours(int num){
  flighthours = flighthours + num;
}

void Part::install(Date& d){
  installationDate = d;
}

const string& Part::getName() const{return name;}

//****************** PART CLASS END ********************************


