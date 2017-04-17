CXX 			= g++
# CPPFLAGS	= -I include # flags for CPP and compiler
CXXFLAGS = -Wall -O2 # flags for C++ compiler
#CFLAGS		= -I	#　*.c -> *.o option
#LDFLAGS		= -L # flag for the compiler named 'ld' which call linker
#LDLIBS		= -l
# SOURCE_DIR = src
# INCLUDE_DIR = include
PROGRAM		= Override3
SRCS = $(wildcard *.cpp)
# SRCS = Average2.cpp InputStream.cpp
# OBJS = $(SRCS:.cpp=.o)
# vpath %.cpp $(SOURCE_DIR)
# vpath %.h $(INCLUDE_DIR)

$(PROGRAM): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY: clean
clean:
	$(RM) $(PROGRAM)
