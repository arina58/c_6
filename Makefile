main: main.o island.o
	gcc main.o island.o -o 	island

main.c: main.c island.h
	gcc -c main.c

island.o: island.c island.h
	gcc -c island.c