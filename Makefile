# Requires a C compiler that supports -std=c2x
# On LC machines run "module load gcc/10.2.1"

CC=gcc
CFLAGS=-Wall -Wextra -Werror -g -O0 -std=c2x -fPIC
LIBS=-lcol
LFLAGS=-lcol -L. -Wl,-rpath,.

lib: col.c col.h harness.c Makefile
	gcc $(CFLAGS) -c col.c
	gcc $(CFLAGS) -shared -o libcol.so col.o
	gcc $(CFLAGS) -c harness.c
	gcc $(CFLAGS) -o harness harness.o $(LIBS) $(LFLAGS)
