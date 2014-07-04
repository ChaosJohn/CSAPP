CC=gcc 
CFLAGS=-I. -Wall 
DEPS=func.h 
OBJ=main.o func.o 

%.o: %.c $(DEPS) 
	$(CC) -c -o $@ $< $(CFLAGS) 

main.out: $(OBJ) 
	$(CC) -o $@ $^ $(CFLAGS) 
