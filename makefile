
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
	$(CXX) $^ -o Langton

AntTest: Ant.o AntTest.o
	$(CXX) $^ -o AntTest

BoardTest: Board.o Space.o Ant.o BoardTest.o
	$(CXX) $^ -o BoardTest

SpaceTest: Space.o SpaceTest.o
	$(CXX) $^ -o SpaceTest

$(OBJS): $(SRCS) $(INCS)
	$(CXX) $(CXXFLAGS) -c $(@:.o=.$(SRCEXT))

BoardTest.o: ./test/BoardTest.cpp
	$(CXX) $(CXXFLAGS) -c ./test/BoardTest.cpp

AntTest.o: ./test/AntTest.cpp
	$(CXX) $(CXXFLAGS) -c ./test/AntTest.cpp

SpaceTest.o: ./test/SpaceTest.cpp
	$(CXX) $(CXXFLAGS) -c ./test/SpaceTest.cpp

.PHONY: clean
clean:
	rm *.o Langton AntTest SpaceTest BoardTest

