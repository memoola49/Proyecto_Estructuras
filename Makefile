a.out: main.o Lista.o
	gcc main.o Lista.o
main.o: main.c
	gcc -c main.c
Lista.o: Lista.c
	gcc -c Lista.c
run: a.out
	./a.out
clear:
	rm a.out main.o Lista.o
