CC = clang
# CFLAGS = -Wall -Wextra -Werror -O2
CFLAGS = -g -Wall -Wextra
CFLAGSFAST = -Wall -Wextra -O4 -ffast-math
OBJS = main.o
IDIR = `pkg-config --cflags glfw3`
LDIR = `pkg-config --static --libs glfw3`


all: main

main: objects/$(OBJS)
	$(CC) $(CFLAGS) -o main objects/$(OBJS) $(IDIR) $(LDIR)

objects/main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o objects/main.o

clean:
	rm -f *~ objects/*.o main
