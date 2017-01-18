
CC=gcc
CFLAGS = -lm

testVectors: vectors.o testVectors.o
	$(CC) $(CFLAGS) -o testVectors vectors.o testVectors.o

vectors.o: vectors.c
	$(CC) $(FLAGS) -c vectors.c -o vectors.o

testVectors.o: testVectors.c
	$(CC) $(FLAGS) -c testVectors.c -o testVectors.o

clean:
	rm *.o
	rm testVectors
