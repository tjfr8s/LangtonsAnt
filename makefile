
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -O3
#LDFLAGS = 

SRCEXT = cpp
INCEXT = hpp

SRCS = $(shell find . -maxdepth 1 -type f -name \*.$(SRCEXT))
OBJS = $(patsubst ./%, ./%, $(SRCS:.$(SRCEXT)=.o))
INCS = $(shell find . -maxdepth 1 -type f -name \*.$(INCEXT))

Langton: $(OBJS)
	$(CXX) $^ -o MatrixCalc

AntTest: Ant.o AntTest.o
	$(CXX) $^ -o AntTest

$(OBJS): $(SRCS) $(INCS)
	$(CXX) $(CXXFLAGS) -c $(@:.o=.$(SRCEXT))

AntTest.o: ./test/AntTest.cpp
	$(CXX) $(CXXFLAGS) -c ./test/AntTest.cpp

.PHONY: clean
clean:
	rm *.o Langton AntTest

