###################################################
# Name: makefile
# Author: Nathan Johnson
# Date: 04.14.2019
# Description: makefile for Lab 2
# #################################################

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -Werror
CXXFLAGS += -g
LDFLAGS = -lboost_date_time

OBJS = count_letters.o letterCount.o output_letters.o

SRCS = count_letters.cpp letterCount.cpp output_letters.cpp

HEADERS =

letterCount.exe: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o letterCount.exe

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm *.o  *.exe
