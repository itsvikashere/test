CC = gcc
SRC = ./src
OBJ = ./obj
INC =./include
BIN = ./bin

CFLAGS = -Wall -g -o
IFLAGS = -I $(INC)
LDFLAGS = -c

link: $(OBJ)/main.o $(OBJ)/function.o
	$(CC) $(CFLAGS) $(BIN)/link $(OBJ)/main.o $(OBJ)/function.o

$(OBJ)/main.o: $(SRC)/main.c
	$(CC) $(LDFLAGS) $(IFLAGS) $(SRC)/main.c
	mv *.o $(OBJ)/

$(OBJ)/function.o: $(SRC)/function.c
	$(CC) $(LDFLAGS) $(IFLAGS) $(SRC)/function.c
	mv *.o $(OBJ)

val:
	valgrind --tool=memcheck $(BIN)/link -v

clean:
	rm $(OBJ)/*.o
	rm $(BIN)/link
