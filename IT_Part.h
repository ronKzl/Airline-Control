#ifndef IT_PART_H
#define IT_PART_H

using namespace std;


#include "Part.h"

//****************** IT_PART CLASS  START ********************************
class IT_Part: virtual public Part {
  public:
    IT_Part(const string& name, int number);
    virtual ~IT_Part();
    virtual bool inspection(Date&);
    virtual void print(ostream& os) const;
  protected:
    int it_inspect;

};
//****************** IT_PART CLASS  END ********************************



#endif
