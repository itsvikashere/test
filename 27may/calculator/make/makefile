CC = gcc
SRC = ./src
OBJ = ./obj
INC =./include
BIN = ./bin

CFLAGS = -Wall -g -o
IFLAGS = -I $(INC)
LDFLAGS = -c

cal: $(OBJ)/cal.o $(OBJ)/cal_fun.o
	$(CC) $(CFLAGS) $(BIN)/cal $(OBJ)/cal.o $(OBJ)/cal_fun.o

$(OBJ)/cal.o: $(SRC)/cal.c
	$(CC) $(LDFLAGS) $(IFLAGS) $(SRC)/cal.c
	mv *.o $(OBJ)/

$(OBJ)/cal_fun.o: $(SRC)/cal_fun.c
	$(CC) $(LDFLAGS) $(IFLAGS) $(SRC)/cal_fun.c
	mv *.o $(OBJ)

clean:
	rm $(OBJ)/*.o
	rm $(BIN)/cal
