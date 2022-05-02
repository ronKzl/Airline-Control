
#include "FHIT_Part.h"
//****************** FHIT_PART CLASS  START ********************************
FHIT_Part::FHIT_Part(const string& name,int fh_inspect, int it_inspect): IT_Part(name,it_inspect), FH_Part(name,fh_inspect), Part(name) {}
FHIT_Part::~FHIT_Part(){}
bool FHIT_Part::inspection(Date& d){
  if( (IT_Part::inspection(d) || FH_Part::inspection(d)) == true ){
    return true;
  }
  return false;
}
void FHIT_Part::print(ostream& os) const{
       Part::print(os);
       os <<"Inspect every: " << fh_inspect << " Flight hours"<<endl;
       os <<"Inspect every: " << it_inspect << " Days installed"<<endl;
   }


//****************** FHIT_PART CLASS  END ********************************
