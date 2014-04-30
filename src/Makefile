all: test

test: main.o FileController.o
	g++ main.o FileController.o -o test

main.o: main.cpp FileController.cpp
	g++ -c main.cpp FileController.cpp

clean:
	rm -rf *o test
