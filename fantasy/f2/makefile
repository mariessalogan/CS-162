#Program Name: Matrix Calculator - makefile
#Name: Mariessa Logan
#Date: 2/12/18
#Description: This is the make file for the program. I used the tutorial to make it.
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
LDFLAGS = -lboost_date_time

OBJS = main.o

SRCS = main.cpp barbarian.cpp blue.cpp character.cpp gamePlay.cpp gamePlay2.cpp gamePlay3.cpp gamePlay4.cpp gamePlay5.cpp harry.cpp medusa.cpp menu.cpp vampire.cpp tourney.cpp

HEADERS = barbarian.hpp blue.hpp character.hpp gamePlay.hpp harry.hpp medusa.hpp menu.hpp vampire.hpp tourney.hpp

main: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${SRCS} -o main

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp) 
#.PHONY: clean 
clean:
	rm *.o battle 
