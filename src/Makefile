all: test

test: HelperMethods.a main.o FileController.o
	g++ -o test main.o FileController.o -L. HelperMethods.a

main.o: main.cpp FileController.cpp
	g++ -c main.cpp FileController.cpp

HelperMethods.o: HelperMethods.cpp
	g++ -c HelperMethods.cpp

HelperMethods.a: HelperMethods.o
	ar rcs HelperMethods.a HelperMethods.o

clean:
	rm -rf *o *a test
