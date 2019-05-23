CC = gcc
EXEC = Memory

Memory:./src/main.o ./src/memory.o
	$(CC) -o $(EXEC) ./src/main.o ./src/memory.o -lSDL2 -lSDL2_image -lSDL2_ttf -std=c99
	./$(EXEC)

./src/main.o:./src/main.c ./headers/memory.h
	$(CC) -o ./src/main.o -c ./src/main.c -std=c99

./src/memory.o:./src/memory.c ./headers/memory.h
	$(CC) -o ./src/memory.o -c ./src/memory.c -std=c99

clean:
	rm -rf ./src/*.o

mrproper:clean
	rm -rf $(EXEC)