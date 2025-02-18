singlyll-test.out: main.o linkedlist.o node.o
	g++ -g -o singlyll-test main.o linkedlist.o node.o

main.o: main.cpp linkedlist.h node.h
	g++ -g -c main.cpp

linkedlist.o: linkedlist.cpp linkedlist.h
	g++ -g -c linkedlist.cpp

node.o: node.cpp node.h
	g++ -g -c node.cpp

clean:
	rm *.o *.out

r:
	./singlyll-test.out

