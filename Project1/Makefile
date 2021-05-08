all: openhtdriver orderedhtdriver
  
openhtdriver: openhttest.cpp
	g++ -std=c++11 -o openhtdriver openhttest.cpp mapdouble.cpp entrydouble.cpp

orderedhtdriver: orderedhttest.cpp 
	g++ -std=c++11 -o orderedhtdriver orderedhttest.cpp mapchain.cpp entrychain.cpp

clean:
	rm openhtdriver orderedhtdriver