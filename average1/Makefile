CXX 			= g++
#CPPFLAGS	= -Wall -O2 # flags for CPP and compiler
CXXFLAGS = -Wall -O2 # flags for C++ compiler
#CFLAGS		= -I	#　*.c -> *.o option
#LDFLAGS		= -L # flag for the compiler named 'ld' which call linker
#LDLIBS		= -l
SOURCE_DIR = ../src
PROGRAM		= Average1
OBJS			= Average1.cpp
vpath %.cpp $(SOURCE_DIR)

$(PROGRAM): $(OBJS)
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean
clean:
	$(RM) $(PROGRAM)
	$(RM) ../wav/*.pitch