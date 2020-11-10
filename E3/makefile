Point.o : Point.h Point.cpp
	g++ -c Point.cpp

Segment.o : Point.h Segment.h Segment.cpp
	g++ -c Segment.cpp

Polygone.o : Point.h Polygone.h Polygone.cpp
	g++ -c Polygone.cpp

e3.o : Point.h Segment.h Polygone.h e3.cpp
	g++ -c e3.cpp

e3 : Point.o Segment.o Polygone.o e3.o
	g++ Point.o Segment.o Polygone.o e3.o -o e3
