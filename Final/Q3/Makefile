CC=g++
CFLAGS=-I.
DEPS = student.hpp #CHANGE 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o student.o  #CHANGE 8 AND 9
	$(CC) -o main main.o student.o 
clean:
	rm -rf *.o main