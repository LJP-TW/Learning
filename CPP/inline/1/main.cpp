#include <iostream>
#include "Class1.h"

using namespace std;

//  void yee();

inline void printHi()
{
	cout << "main.cpp printHi" << endl;
}

int main()
{
	Class1 c;

//	yee();

	printHi();

//	printHello();

//	c.printHello();


	return 0;
}
