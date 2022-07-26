#Makefile
all: add-nbo

add-nbo: add.o byte_order.o main.o
	gcc -o add-nbo add.o byte_order.o main.o

main.o: add.h byte_order.h main.c

add.o: add.h add.c

byte_order.o: byte_order.h byte_order.c

clean:
	rm -f add-nbo
	rm -f *.o
