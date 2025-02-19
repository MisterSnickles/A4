singlyll-test.exe: main.o linkedlist.o node.o
	g++ -g -o singlyll-test main.o linkedlist.o node.o

main.o: main.cpp linkedlist.h
	g++ -g -c main.cpp

linkedlist.o: linkedlist.cpp linkedlist.h
	g++ -g -c linkedlist.cpp

node.o: node.cpp node.h
	g++ -g -c node.cpp

r:
	./singlyll-test.exe

