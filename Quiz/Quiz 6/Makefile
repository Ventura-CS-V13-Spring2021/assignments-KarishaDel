CC=g++
CFLAGS=-I.
DEPS = IntegerArray.hpp #CHANGE 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o IntegerArray.o #CHANGE 8 AND 9
	$(CC) -o main.exe main.o IntegerArray.o 
clean:
	bin/rm -rf *.o a.out 