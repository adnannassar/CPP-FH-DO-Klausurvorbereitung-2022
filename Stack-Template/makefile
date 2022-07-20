main: main.cpp stack.h stack.o 
	c++ -o main main.cpp stack.o -std=c++11

stack.o: stack.cpp
	c++ -c stack.cpp -std=c++11

clean:
	rm *.o main