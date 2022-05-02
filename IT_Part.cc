#include "IT_Part.h"

//****************** IT_PART CLASS  START ********************************
IT_Part::IT_Part(const string& name, int number): Part(name), it_inspect(number) {}
IT_Part::~IT_Part(){}
bool IT_Part::inspection(Date& d){

  //return true if num days between installation date and the inspection date is bigger or equalt to it_inspect
  if ((d.toDays()-installationDate.toDays()) >= it_inspect){return true;}
  return false;
}

void IT_Part::print(ostream& os) const{
       Part::print(os);
       os <<"Inspect every: " << it_inspect << " Days installed"<<endl;
   }

//****************** IT_PART CLASS  END ********************************
