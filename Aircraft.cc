#include "Aircraft.h"


Aircraft::Aircraft(const string& type, const string& reg): type(type), registration(reg), flighthours(0) {}

Aircraft::~Aircraft(){
  //just here symboliclly since airline stores all of the parts deleting the pointers there is enough
}

void Aircraft::install(Part* part, Date& date){
  //checking if the part is already installed
  // req 4.8.4.g says "we will assume the necessary error checking for that is done elsewhere." but did not specify where
  //so I assume it is when you install a part on an aircraft and that parts are distinguished by names.
  for (int i = 0; i < parts.getSize(); i++) {
    if(parts[i]->getName() == part->getName()){
      cout << "Part " << part << " Is already installed on this aircraft" << endl;
      return;
    }
  }
  part->install(date);
  parts.add(part);
}

void Aircraft::takeFlight(int hours){
  flighthours = flighthours + hours;

  for (int i = 0; i < parts.getSize(); i++) {
    parts[i]->addFlightHours(hours);
  }
}
                                                //pass by reference
void Aircraft::inspectionReport(Date date, Array<Part*>&prts){
  for (int i = 0; i < parts.getSize(); i++) {
    if(parts[i]->inspection(date)){
      prts.add(parts[i]);
    }
  }
}


const string& Aircraft::getRegistration() const{ return registration;}

ostream& operator<<(ostream& out, const Aircraft& a){
  out << "Aircraft " << a.type << endl << "Registration: " << a.getRegistration() << endl << "Flown for " << a.flighthours << " hours" << endl;
  return out;
}
