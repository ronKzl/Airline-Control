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

// //****************** FH_PART CLASS  START ********************************
// FH_Part::FH_Part(const string& name, int number): Part(name), fh_inspect(number) {}
//
// FH_Part::~FH_Part(){}
//
// bool FH_Part::inspection(Date& d){
//   if( flighthours >= fh_inspect){return true;}
//
//   return false;
// }
//
// void FH_Part::print(ostream& os) const{
//        Part::print(os);
//        os <<"Inspect every: " << fh_inspect<< " Flight hours" <<endl;
//    }
//
//
// //****************** FH_PART CLASS  END ********************************

// //****************** IT_PART CLASS  START ********************************
// IT_Part::IT_Part(const string& name, int number): Part(name), it_inspect(number) {}
// IT_Part::~IT_Part(){}
// bool IT_Part::inspection(Date& d){
//
//   //return true if num days between installation date and the inspection date is bigger or equalt to it_inspect
//   if ((d.toDays()-installationDate.toDays()) >= it_inspect){return true;}
//   return false;
// }
//
// void IT_Part::print(ostream& os) const{
//        Part::print(os);
//        os <<"Inspect every: " << it_inspect << " Days installed"<<endl;
//    }
//
// //****************** IT_PART CLASS  END ********************************


// //****************** FHIT_PART CLASS  START ********************************
// FHIT_Part::FHIT_Part(const string& name,int fh_inspect, int it_inspect): IT_Part(name,it_inspect), FH_Part(name,fh_inspect), Part(name) {}
// FHIT_Part::~FHIT_Part(){}
// bool FHIT_Part::inspection(Date& d){
//   if( (IT_Part::inspection(d) || FH_Part::inspection(d)) == true ){
//     return true;
//   }
//   return false;
// }
// void FHIT_Part::print(ostream& os) const{
//        Part::print(os);
//        os <<"Inspect every: " << fh_inspect << " Flight hours"<<endl;
//        os <<"Inspect every: " << it_inspect << " Days installed"<<endl;
//    }
//
//
// //****************** FHIT_PART CLASS  END ********************************
