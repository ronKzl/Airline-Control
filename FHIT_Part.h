#ifndef FHIT_PART_H
#define FHIT_PART_H

using namespace std;


#include "Part.h"
#include "FH_Part.h"
#include "IT_Part.h"

//****************** FHIT_PART CLASS  START ********************************

class FHIT_Part: public FH_Part, public IT_Part {
  public:
    FHIT_Part(const string& name,int fh_inspect, int it_inspect);
    virtual ~FHIT_Part();
    virtual bool inspection(Date&);
    virtual void print(ostream& os) const;

};

//****************** FHIT_PART CLASS  END ********************************

#endif
