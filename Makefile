all: main.o ArrayStack.o ../Arraylist/Arraylist.o
	g++ main.o ArrayStack.o ../Arraylist/Arraylist.o -o ArrayStack
main.o: main.cpp
	g++ -c main.cpp -o main.o
ArrayStack.o: ArrayStack.cpp
	g++ -c ArrayStack.cpp -o ArrayStack.o
../Arraylist/Arraylist.o: ../Arraylist/Arraylist.cpp
	g++ -c ../Arraylist/Arraylist.cpp -o ../Arraylist/Arraylist.o
clean:
	rm -f *.o ArrayStack