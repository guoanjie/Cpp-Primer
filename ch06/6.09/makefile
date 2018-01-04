CC = g++
CCFLAGS = -std=c++11 -I..
LOCFLAGS =

all: 6.09.exe

%.o: %.cc
	$(CC) $(CCFLAGS) $(LOCFLAGS) -c $< -o $@

6.09.exe: fact.o factMain.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) $^ -o $@

clean:
	rm -rf *.o core *.stackdump

clobber: clean
	rm -rf *.exe
