#ifndef AIRLINE_H
#define AIRLINE_H

using namespace std;


#include "Aircraft.h"
#include <iostream>
#include <string>
#include <iomanip>

class Airline{

  public:
    Airline(const string& name);
    ~Airline();

    void addAircraft(const string& type, const string& reg);
    void addPart(const string& partName, int fh_inspect, int it_inspect);

    void takeFlight(const string& reg, int hours);

    void printAircraft() const;
    void printParts() const;

    void inspectionReport(const string& reg, Date& date);

    bool install(const string& aircraftReg,const string& partName, Date& date);

    void print() const;

  private:
    string name;
    Array<Part*> inspectParts;
    Array<Aircraft*> aircrafts;
    //pass by pointer
    void getAircraft(const string& registration, Aircraft **a);
    //pass by pointer
    void getPart(const string& name, Part **p);
};



#endif
