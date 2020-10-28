OBJ = list.o main.o
VPATH = ../lib
CC=gcc
all: $(OBJ)
	$(CC) -o $(BIN)/LIST2  $(OBJ)
list.o : common.h
main.o : list.h
clean:
	rm -rf *.o list
.PHONY : clean all
