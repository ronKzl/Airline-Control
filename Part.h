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


#endif
