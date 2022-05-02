
#include "FH_Part.h"
//****************** FH_PART CLASS  START ********************************
FH_Part::FH_Part(const string& name, int number): Part(name), fh_inspect(number) {}

FH_Part::~FH_Part(){}

bool FH_Part::inspection(Date& d){
  if( flighthours >= fh_inspect){return true;}

  return false;
}

void FH_Part::print(ostream& os) const{
       Part::print(os);
       os <<"Inspect every: " << fh_inspect<< " Flight hours" <<endl;
   }


//****************** FH_PART CLASS  END ********************************
