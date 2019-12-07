
a.exe: main.o Lista.o
	gcc main.o Lista.o

run: a.exe
	./a.exe

clean:
	rm -f a.exe
