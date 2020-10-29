EXE = prog5
CC= g++

OBJECTS= pound.o
LFLAGS =
CFLAGS = -Wall



all: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXE)

pound.o: pound.cpp pound.h 
	$(CC) $(CFLAGS) -c pound.cpp



clean:
	rm -rf $(EXE) $(OBJECTS) *~
	
