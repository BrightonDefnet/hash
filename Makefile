all: hash

hash: main.o Node.o Table.o Student.o
	g++ -g -o hash main.o Node.o Table.o Student.o

main.o: main.cpp
	g++ -g -c main.cpp

Node.o: Node.cpp Node.h
	g++ -g -c Node.cpp

Table.o: Table.cpp Table.h
	g++ -g -c Table.cpp

Student.o: Student.cpp Student.h
	g++ -g -c Student.cpp
