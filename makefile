CC = g++
CCFLAGS = -std=c++0x -I..
LOCFLAGS =

all: $(OBJECTS)

%.o: %.cc
	$(CC) $(CCFLAGS) $(LOCFLAGS) -c $< -o $@

%.exe: %.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) $< -o $@

clean:
	rm -rf *.o core *.stackdump

clobber: clean
	rm -rf *.exe
