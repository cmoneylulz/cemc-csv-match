all: test

test: HelperMethods.a main.o FileController.o KeyTable.o ValueTable.o
	g++ -o test main.o FileController.o KeyTable.o ValueTable.o -L. HelperMethods.a

main.o: main.cpp FileController.cpp KeyTable.cpp ValueTable.cpp
	g++ -c main.cpp -std=c++0x FileController.cpp KeyTable.cpp ValueTable.cpp

FileController.o: KeyTable.cpp ValueTable.cpp
	g++ -c F-std=c++0x FileController.cpp KeyTable.cpp ValueTable.cpp

HelperMethods.o: HelperMethods.cpp
	g++ -c -std=c++0x HelperMethods.cpp

HelperMethods.a: HelperMethods.o
	ar rcs HelperMethods.a HelperMethods.o

clean:
	rm -rf *o *a test
