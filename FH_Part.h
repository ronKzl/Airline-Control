#ifndef FH_PART_H
#define FH_PART_H

using namespace std;


#include "Part.h"

//****************** FH_PART CLASS  START ********************************
class FH_Part: virtual public Part {
  public:
    FH_Part(const string& name, int number);
    virtual ~FH_Part();
    virtual bool inspection(Date&);
    virtual void print(ostream& os) const;
  protected:
    int fh_inspect;

};
//****************** FH_PART CLASS END********************************



#endif
