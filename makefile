#########################################################################
##01/16/2017																            Alexander Alava##
##makefile																				 					  U35432961##
##																																	   ##
## This is the makefile for the file "lineTest" and all its dependants ##
#########################################################################


line: lineTest.o line.o
		g++ -o line lineTest.o line.o

lineTest.o: lineTest.cpp line.cpp line.h
	g++ -c lineTest.cpp line.cpp

polynomial.o: line.cpp line.h
	g++ -c line.cpp
