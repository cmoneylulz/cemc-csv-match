all: test

test: HelperMethods.a main.o KeyMatch.o FileController.o KeyTable.o ValueTable.o
	g++ -o test main.o KeyMatch.o FileController.o KeyTable.o ValueTable.o -L. HelperMethods.a

main.o: main.cpp KeyMatch.cpp FileController.cpp KeyTable.cpp ValueTable.cpp
	g++ -c main.cpp -std=c++0x KeyMatch.cpp FileController.cpp KeyTable.cpp ValueTable.cpp

KeyMatch.o: KeyMatch.cpp FileController.cpp KeyTable.cpp ValueTable.cpp
	g++ -c -std=c++0x KeyMatch.cpp FileController.cpp KeyTable.cpp ValueTable.cpp

FileController.o: FileController.cpp KeyTable.cpp ValueTable.cpp
	g++ -c -std=c++0x FileController.cpp KeyTable.cpp ValueTable.cpp

HelperMethods.o: HelperMethods.cpp
	g++ -c -std=c++0x HelperMethods.cpp

HelperMethods.a: HelperMethods.o
	ar rcs HelperMethods.a HelperMethods.o

clean:
	rm -rf *o *a test
