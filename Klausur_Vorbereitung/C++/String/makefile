main: main.cpp string.h string.o 
	c++ -o main main.cpp string.o -std=c++11

string.o: string.cpp
	c++ -c string.cpp -std=c++11

clean:
	rm *.o main