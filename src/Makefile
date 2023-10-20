TARGET = cat

CC = gcc -c -Wall -Wextra -Werror -std=c11

$(TARGET): main.o parser.o
	$(CC) main.o parser.o -o $(TARGET)

main.o:
	$(CC) main.c -o main.o
parser.o:
	$(CC) parser.c -o parser.o

clean:
	rm -rf *.o $(TARGET)