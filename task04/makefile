OBJ = main.o sort.lib
main : ${OBJ}
	g++ ${OBJ} -o main
main.o : main.cpp sort.hpp
	g++ -c main.cpp
exchange.o : exchange.cpp
	g++ -c exchange.cpp
separation.o : separation.cpp
	g++ -c separation.cpp
quicksort.o : quicksort.cpp
	g++ -c quicksort.cpp
printarray.o : printarray.cpp
	g++ -c printarray.cpp
sort.lib : exchange.o separation.o quicksort.o printarray.o
	ar rs sort.lib exchange.o separation.o quicksort.o printarray.o
clean :
	del *.o main.exe
	