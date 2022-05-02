#ifndef PART_H
#define PART_H

using namespace std;

#include "Date.h"
#include <iostream>
#include <string>
#include <iomanip>

//****************** PART CLASS  START ********************************
class Part {
  friend ostream& operator<<(ostream&, const Part&);

  public:
    Part(const string& name);
    virtual ~Part();

    void addFlightHours(int);
    void install(Date&);

    const string& getName() const;

    virtual bool inspection(Date&) = 0;
    virtual void print(ostream& os) const;

  protected:
    int flighthours;
    Date installationDate;
  private:
    string name;


};
//****************** PART CLASS END ********************************

// //****************** FH_PART CLASS  START ********************************
// class FH_Part: virtual public Part {
//   public:
//     FH_Part(const string& name, int number);
//     virtual ~FH_Part();
//     virtual bool inspection(Date&);
//     virtual void print(ostream& os) const;
//   protected:
//     int fh_inspect;
//
// };
// //****************** FH_PART CLASS END********************************

// //****************** IT_PART CLASS  START ********************************
// class IT_Part: virtual public Part {
//   public:
//     IT_Part(const string& name, int number);
//     virtual ~IT_Part();
//     virtual bool inspection(Date&);
//     virtual void print(ostream& os) const;
//   protected:
//     int it_inspect;
//
// };
// //****************** IT_PART CLASS  END ********************************

// //****************** FHIT_PART CLASS  START ********************************
//
// class FHIT_Part: public FH_Part, public IT_Part {
//   public:
//     FHIT_Part(const string& name,int fh_inspect, int it_inspect);
//     virtual ~FHIT_Part();
//     virtual bool inspection(Date&);
//     virtual void print(ostream& os) const;
//
// };
//
// //****************** FHIT_PART CLASS  END ********************************


#endif
