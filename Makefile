main: main.o gd.o
	gcc main.o gd.o -o result
main.o : main.c
	gcc -c main.c
gd.o: gd.c
	gcc -c gd.c