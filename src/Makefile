TARGET = cat
CC = gcc

$(TARGET): main.o parser.o
	$(CC) main.o parser.o -o $(TARGET)

main.o: main.c
	$(CC) -c main.c -o main.o

parser.o: parser.c
	$(CC) -c parser.c -o parser.o

clean:
	rm -rf *.o $(TARGET)
