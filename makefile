###################################################################
DIRSRC = ./src/
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
main.o: $(DIRSRC)main.cpp cards.o
	$(CC) $(DIRSRC)main.cpp -I$(DIRSRC)
cards.o: $(DIRSRC)cards.cpp $(DIRSRC)cards.h
	$(CC) $(DIRSRC)cards.cpp
###################################################################
clean:
	rm -f *~
	rm -f *.o
	rm -f *.exe
	rm -f -r ccache
	rm -f .fuse*
