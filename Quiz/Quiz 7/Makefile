CC=g++
CFLAGS=-I.
DEPS = coordinate.hpp rectangle.hpp #CHANGE 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o coordinate.o rectangle.o #CHANGE 8 AND 9
	$(CC) -o main main.o coordinate.o rectangle.o 
clean:
	rm -rf *.o main