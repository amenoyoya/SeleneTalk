TARGET = libsltk3_core.a
CC = g++
AR = ar

CXXFLAGS = -O2 -c -Wall -std=c++11
ARFLAGS = rcs
INCDIR = 
LIBDIR = 
LIBS = 

SRCS = base.cpp core.cpp filesystem.cpp
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

.cpp.o:
	$(CC) $(CXXFLAGS) -c $< $(INCDIR) $(LIBDIR) $(LIBS)

.PHONY: clean
clean:
	$(RM) $(TARGET) $(OBJS)
