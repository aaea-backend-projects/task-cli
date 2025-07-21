all: build utils.o

build: 
	echo "Running build"

utils.o: src/utils.c src/utils.h
	gcc -c src/utils.c -o src/utils.o

test: tests/task-cli.c src/utils.o
	gcc tests/task-cli.c src/utils.o -rdynamic -o tests/task-cli
	./tests/task-cli

clean:
	rm -f *.o tests/task-cli build/*.o tests/*.o
.PHONY: build
