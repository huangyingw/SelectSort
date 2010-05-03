run : selectSort.o
	g++ -o run selectSort.o
selectSort.o : selectSort.cpp selectSort.h
	g++ -c selectSort.cpp
clean :
	rm run selectSort.o
