#Program Name: Matrix Calculator - makefile
#Name: Mariessa Logan
#Date: 2/10/18
#Description: This is the make file for the program. I used the tutorial to make it.
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
LDFLAGS = -lboost_date_time

OBJS = func.o

SRCS = main.cpp func.cpp 

HEADERS = func.hpp

osu: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${SRCS} -o func


#.PHONY: clean 
clean:
	rm *.o func 
