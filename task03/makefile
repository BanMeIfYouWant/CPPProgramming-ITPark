OBJ = main.o min.lib
main : ${OBJ}
	g++ ${OBJ} -o main
main.o : main.cpp min.hpp
	g++ -c main.cpp
min2.o : min2.cpp
	g++ -c min2.cpp
min3.o : min3.cpp
	g++ -c min3.cpp
min.lib : min2.o min3.o
	ar rs min.lib min2.o min3.o
clean :
	del *.o main.exe
