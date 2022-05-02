#ifndef AIRCRAFT_H
#define AIRCRAFT_H

using namespace std;

#include "Date.h"
#include "Part.h"
#include "FH_Part.h"
#include "IT_Part.h"
#include "FHIT_Part.h"
#include "Array.h"
#include <iostream>
#include <string>
#include <iomanip>

class Aircraft{
  friend ostream& operator<<(ostream&, const Aircraft&);

  public:
    Aircraft(const string& type, const string& reg);
    ~Aircraft(); //destroy array?

    void install(Part*, Date&);
    void takeFlight(int hours);
                                      //pass by reference
    void inspectionReport(Date date, Array<Part*>&);
    const string& getRegistration() const;

  private:
    string type;
    string registration;
    int flighthours;
    Array<Part*> parts;

};


#endif
