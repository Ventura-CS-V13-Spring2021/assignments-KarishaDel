CC=g++
CFLAGS=-I.
DEPS = Student.hpp #CHANGE 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o Student.o  #CHANGE 8 AND 9
	$(CC) -o main main.o Student.o 
clean:
	rm -rf *.o main