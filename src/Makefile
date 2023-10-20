TARGET = cat
CC = gcc

$(TARGET): main.o parser.o cat.o
	$(CC) main.o parser.o cat.o -o $(TARGET)

main.o: main.c
	$(CC) -c main.c -o main.o

parser.o: parser.c
	$(CC) -c parser.c -o parser.o

cat.o: cat.c
	$(CC) -c cat.c -o cat.o

clean:
	rm -rf *.o $(TARGET)
