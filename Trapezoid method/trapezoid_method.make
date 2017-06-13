CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=test_trapezoid_method.cpp trapezoid_method.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=test.out

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@