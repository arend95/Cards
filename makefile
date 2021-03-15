###################################################################
COMP = g++
CFLAGS = -O3 -std=c++11
CC  = $(COMP) $(CFLAGS) -c
CO  = $(COMP) $(CFLAGS) -o
###################################################################
EXE = main.exe
all: $(EXE)
###################################################################
main.exe: main.o cards.o
	$(CO) main.exe main.o cards.o
main.o: main.cpp cards.o
	$(CC) main.cpp
cards.o: cards.cpp cards.h
	$(CC) cards.cpp
###################################################################
clean:
	rm -f *~
	rm -f *.o
	rm -f *.exe
	rm -f -r ccache
	rm -f .fuse*
