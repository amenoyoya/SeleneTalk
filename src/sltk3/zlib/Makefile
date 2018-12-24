TARGET = libsltk3_zlib.a
CXC = g++
CC = gcc
AR = ar

CXXFLAGS = -O2 -Wall -std=c++11
CFLAGS = -O3 -D_LARGEFILE64_SOURCE=1 -DHAVE_HIDDEN
ARFLAGS = rcs
INCDIR = 
LIBDIR = 
LIBS = 

SRCS = zipArchiver.cpp zipFunction.cpp zipReader.cpp
ZLIBS = $(wildcard zlib-1.2.8/*.c)
OBJS = $(SRCS:.cpp=.o) $(ZLIBS:.c=.o)

$(TARGET): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

zlib-1.2.8/%.o: zlib-1.2.8/%.c
	$(CC) $(CFLAGS) -c -o $@ $< $(INCDIR) $(LIBDIR) $(LIBS)

.cpp.o:
	$(CXC) $(CXXFLAGS) -c $< $(INCDIR) $(LIBDIR) $(LIBS)

.PHONY: clean
clean:
	$(RM) $(TARGET) $(OBJS)
