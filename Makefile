objects = main.o Control.o Part.o FH_Part.o IT_Part.o FHIT_Part.o Airline.o Date.o Aircraft.o View.o

project: $(objects)
	g++ -o project $(objects)

main.o: main.cc
	g++ -c main.cc

Control.o: Control.h Control.cc
	g++ -c Control.cc

View.o: View.cc View.h
	g++ -c View.cc

Airline.o: Airline.cc Airline.h Array.h
	g++ -c Airline.cc

Aircraft.o: Aircraft.cc Aircraft.h Array.h
	g++ -c Aircraft.cc

Date.o: Date.cc Date.h
	g++ -c Date.cc

Part.o: Part.cc Part.h
	g++ -c Part.cc

FH_Part.o: FH_Part.cc FH_Part.h Part.h
	g++ -c FH_Part.cc

IT_Part.o: IT_Part.cc IT_Part.h Part.h
	g++ -c IT_Part.cc

FHIT_Part.o: FHIT_Part.cc FHIT_Part.h Part.h IT_Part.h FH_Part.h
	g++ -c FHIT_Part.cc

clean:
	rm -f project *.o *.gch
