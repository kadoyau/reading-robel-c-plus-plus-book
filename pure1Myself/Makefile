CXX 			= g++
# CPPFLAGS	= -I include # flags for CPP and compiler
CXXFLAGS = -Wall -O2 # flags for C++ compiler
#CFLAGS		= -I	#　*.c -> *.o option
#LDFLAGS		= -L # flag for the compiler named 'ld' which call linker
#LDLIBS		= -l
# SOURCE_DIR = src
# INCLUDE_DIR = include
PROGRAM		= Pure1Myself
SRCS = $(wildcard *.cpp)
# OBJS = $(SRCS:.cpp=.o)
# vpath %.cpp $(SOURCE_DIR)
# vpath %.h $(INCLUDE_DIR)

$(PROGRAM): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $@


include $(subst .cpp,.d,$(SRCS))

%.d: %.cpp
	$(CXX) -MM $(CPPFLAGS) $< > $@.$$$$;	\
	sed 's,\($*\)\.o[ :]*,\l.o $@ : ,g' < $@.$$$$ > $@;	\
	rm -f $@.$$$$

.PHONY: clean
clean:
	$(RM) $(PROGRAM) $(subst .cpp,.d,$(SRCS))