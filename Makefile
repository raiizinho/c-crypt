CC = gcc
CFLAGS = -Wall -Wextra -std=c11

programa: main.c c-crypt.c c-crypt.h
	$(CC) $(CFLAGS) main.c c-crypt.c -o programa

clean:
	rm -f programa

.PHONY: clean