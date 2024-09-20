app: main.o utility.o
	g++ main.o utility.o -o app

main.o: main.cpp
	g++ -c main.cpp

utility.0: utility.cpp
	g++ -c utility.cpp