Agenda.o: lista.c
	gcc lista.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o Agenda.o
	gcc main.o Agenda.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o Agenda.o
