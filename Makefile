main: main.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o

tests: tests.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o caesar.o vigenere.o decrypt.o

tests.o: tests.cpp doctest.h caesar.h vigenere.h decrypt.h
	g++ -c tests.cpp 

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

test-ascii.o: test-ascii.cpp
	g++ -c test-ascii.cpp

main.o: main.cpp caesar.h vigenere.h decrypt.h
	g++ -c main.cpp 

vigenere.o: vigenere.cpp vigenere.h
	g++ -c vigenere.cpp

caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp

decrypt.o: decrypt.cpp decrypt.h
	g++ decrypt.cpp 

clean:
	rm -f main.o caesar.o vigenere.o decrypt.o tests.o test-ascii.o tests main

