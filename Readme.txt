---------------
===Project ReadMe===
---------------
Program author: Ron Stuchevsky

List of header files:
Aircraft.h
Airline.h
Date.h
defs.h
Array.h - Templated array that can hold pointers. Contains the .cc contents as well
View.h
Control.h
Part.h
FH_Part.h
IT_Part.h
FHIT_Part.h

Source files:
Aircraft.cc - represents a plane an airline may operate and maintain parts of.
Airline.cc - represents the airline which can have operate and maintain many aircrafts as well as have some extra parts in storage.
Date.cc - represents the physical time needed to do all the maintance calculations
Part.cc, FH_Part.cc, IT_Part.cc, FHIT_Part.cc - represents a part that can be installed and maintained on an 
aircraft or sit in the airline storage.(note class Part itself is abstract).
Control.cc - has all the test functions for the program
View.cc - provides the cmd interface to the user for testing the program
main.cc - executes the main program flow

To compile: make project
To clean: make clean ,this will get rid of the .o files and the a4 executible
To launch: ./project