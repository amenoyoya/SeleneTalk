TARGET = libsltk3_engine.a
CC = g++
AR = ar

CXXFLAGS = -O2 -c -Wall -std=c++11
ARFLAGS = rcs
INCDIR = -I../../extlib/LuaJIT-2.0.4-sltk/src
LIBDIR = 
LIBS = 

SRCS = core.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

.cpp.o:
	$(CC) $(CXXFLAGS) -c $< $(INCDIR) $(LIBDIR) $(LIBS)

.PHONY: clean
clean:
	$(RM) $(TARGET) $(OBJS)
