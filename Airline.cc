#include "Airline.h"



Airline::Airline(const string& name): name(name){}

Airline::~Airline(){
  for (int i = 0; i < inspectParts.getSize(); i++) {
    delete inspectParts[i];
  }
  for (int i = 0; i < aircrafts.getSize(); i++) {
    delete aircrafts[i];
  }
}

void Airline::addAircraft(const string& type, const string& reg){
  aircrafts.add(new Aircraft(type,reg));
}

void Airline::addPart(const string& partName, int fh_inspect, int it_inspect){
  Part* part;
  if(fh_inspect == 0){
    part = new IT_Part(partName, it_inspect);
    inspectParts.add(part);
    return;
  }
  if(it_inspect == 0){
    part = new FH_Part(partName, fh_inspect);
    inspectParts.add(part);
    return;
  }
  part = new FHIT_Part(partName,fh_inspect,it_inspect);
  inspectParts.add(part);
  return;
}


void Airline::takeFlight(const string& reg, int hours){
  Aircraft* aircraft;
  getAircraft(reg,&aircraft);
  if (aircraft == NULL){
    cout << "AIRCRAFT DOES NOT EXIST" << endl;
    return;
  }
  aircraft->takeFlight(hours);
  return;

}

void Airline::printAircraft() const{
  for (int i = 0; i < aircrafts.getSize(); i++) {
      cout << *aircrafts[i] << endl;
    }
}
void Airline::printParts() const{

  for (int i = 0; i < inspectParts.getSize(); ++i) {
      cout << *inspectParts[i] << endl;
    }

}

void Airline::inspectionReport(const string& reg, Date& date){
  Aircraft* aircraft;
  getAircraft(reg,&aircraft);
  if(aircraft == NULL){
    cout << "AIRCRAFT DOES NOT EXIST" << endl;
    return;
  }
  //give reported parts from inspectARRAY
  Array<Part*> aircraftInspectionParts;
  aircraft->inspectionReport(date,aircraftInspectionParts);
  cout << "The following parts from :" << aircraft->getRegistration() << " require inspection:" << endl;
  for (int i = 0; i < aircraftInspectionParts.getSize(); i++) {
    cout << *aircraftInspectionParts[i] << endl;
  }
  cout << endl;
}

bool Airline::install(const string& aircraftReg,const string& partName, Date& date){
  Aircraft* aircraft;
  getAircraft(aircraftReg,&aircraft);
  if(aircraft == NULL){
    cout << "AIRCRAFT DOES NOT EXIST" << endl;
    return false;
  }
  Part* part;
  getPart(partName,&part);
  if(part == NULL){
    cout << "PART DOES NOT EXIST" << endl;
    return false;
  }
  aircraft->install(part,date);
  return true;
}


void Airline::getAircraft(const string& registration, Aircraft **a){
  for (int i = 0; i < aircrafts.getSize(); i++) {
      if(aircrafts[i]->getRegistration() == registration){
        *a = aircrafts[i];
        return;
      }
    }
    *a = NULL;
}

void Airline::getPart(const string& name, Part **p){
  for (int i = 0; i < inspectParts.getSize(); i++) {
    if(inspectParts[i]->getName() == name){
      *p = inspectParts[i];
      return;
      }
    }
    *p = NULL;
}

void Airline::print() const{
  cout << "Airline: " << name << endl;
}
