
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -O3
#LDFLAGS = 

SRCEXT = cpp
INCEXT = hpp

NEED TO FIX OBJECT FILES FOR THIS PROJECT
SRCS = $(shell find . -type f -name \*.$(SRCEXT))
OBJS = $(patsubst ./%, ./%, $(SRCS:.$(SRCEXT)=.o))
INCS = $(shell find . -type f -name \*.$(INCEXT))

Langton: $(OBJS)
	$(CXX) $^ -o MatrixCalc

AntTest:

$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $(@:.o=.$(SRCEXT))

.PHONY: clean
clean:
	rm *.o MatrixCalc

