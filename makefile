#
# makefile for image utilities C library
#

CC = gcc
FLAGS = -Wall -std=gnu99
INCLUDES = -c

string_utils: string_utils.o string_utils.c
	$(CC) $(FLAGS) $(INCLUDES) string_utils.o string_driver.c string_driver

string_utils.o: string_utils.c string_utils.h
	$(CC) $(FLAGS) $(INCLUDES) -c string_utils.c string_utils.o

clean:
	rm -f *~ *.o
