all: hw
		./hw

hw: hw.o LinkedList.o Link.o
	g++ -std=c++17 -o hw hw.o LinkedList.o Link.o

hw.o: hw.cpp LinkedList.h Link.h
	g++ -std=c++17 -c hw.cpp

LinkedList.o: LinkedList.cpp LinkedList.h Link.h
	g++ -std=c++17 -c LinkedList.cpp

Link.o: Link.cpp Link.h
	g++ -std=c++17 -c Link.cpp

clean:
	rm -f hw *.o

.PHONY: all clean