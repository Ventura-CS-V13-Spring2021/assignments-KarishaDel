CC=g++
CFLAGS=-I.
DEPS = address.hpp DOB.hpp student.hpp #CHANGE 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o DOB.o address.o student.o #CHANGE 8 AND 9
	$(CC) -o main.exe main.o DOB.o address.o student.o 
clean:
	bin/rm -rf *.o a.out 