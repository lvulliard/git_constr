all:main

main: main.o simple_obj.o
	g++ -o main main.o simple_obj.o

main.o: main.cpp Simple_obj.h
	g++ -o main.o -c main.cpp -Wall

simple_obj.o: Simple_obj.cpp Simple_obj.h
	g++ -o simple_obj.o -c Simple_obj.cpp -Wall

clean:
	rm -rf *.o

mrproper: clean
	rm -rf main