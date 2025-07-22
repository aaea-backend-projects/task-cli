all: build utils.o task-cli.o task.o

build: src/task-cli.o src/utils.o
	echo "Running build"
	gcc src/task-cli.o src/utils.o -o build/task-cli

task-cli.o: src/task-cli.c 
	gcc -c src/task-cli.c -o src/task-cli.o

task.o: src/task.c src/task.h
	gcc -c src/task.c -o src/task.o
utils.o: src/utils.c src/utils.h
	gcc -c src/utils.c -o src/utils.o

test: tests/task-cli.c src/utils.o src/task.o
	gcc tests/task-cli.c src/utils.o src/task.o -rdynamic -o tests/task-cli
	./tests/task-cli
run:
	@./build/task-cli

clean:
	rm -f *.o tests/task-cli build/*.o tests/*.o
.PHONY: build
