CC = clang++
# CFLAGS = -Wall -Wextra -Werror -O2
CFLAGS = -std=c++11 -stdlib=libc++ -g -Wall -Wextra
CFLAGSFAST = -Wall -Wextra -O4 -ffast-math
OBJS = gameMain.o
IDIR = `pkg-config --cflags glfw3`
LDIR = `pkg-config --static --libs glfw3`


all: gameMain

gameMain: objects/$(OBJS)
	$(CC) $(CFLAGS) -o gameMain objects/$(OBJS) $(IDIR) $(LDIR)

objects/gameMain.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o objects/gameMain.o

clean:
	rm -f *~ objects/*.o main
