lista.o: lista.c
	gcc lista.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o lista.o
	gcc main.o lista.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o lista.o
