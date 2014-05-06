all: test

test: HelperMethods.a main.o FileController.o KeyTable.o
	g++ -o test main.o FileController.o KeyTable.o -L. HelperMethods.a

main.o: main.cpp FileController.cpp KeyTable.cpp
	g++ -c main.cpp FileController.cpp KeyTable.cpp

FileController.o: KeyTable.cpp
	g++ -c FileController.cpp KeyTable.cpp

HelperMethods.o: HelperMethods.cpp
	g++ -c HelperMethods.cpp

HelperMethods.a: HelperMethods.o
	ar rcs HelperMethods.a HelperMethods.o

clean:
	rm -rf *o *a test
