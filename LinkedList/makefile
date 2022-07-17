main: main.cpp Node.h Node.o LinkedList.h LinkedList.o
	c++ -o main main.cpp Node.o LinkedList.o -std=c++11

Node.o: Node.cpp
	c++ -c Node.cpp -std=c++11

LinkedList.o: LinkedList.cpp
	c++ -c LinkedList.cpp -std=c++11

clean:
	rm *.o main