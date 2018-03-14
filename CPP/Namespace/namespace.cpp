#include <iostream>
#include "my.h"

using namespace yee;
using namespace lol; // There is imposible to do something like 'unusing namespace'

// namespace extension
namespace yee
{
	void printYeeeeeeee()
	{
		cout << "Yeeeeeeee" << endl;
	}
}

int main()
{
	// Because both yee and lol namespace contain the declaration of class justSimpleClass
	// programmers must use elaborated type specifier
	// or the compiler will say that it is ambigious
	yee::justSimpleClass jsc; 
	jsc.printHello();

	lol::justSimpleClass jsc2;
	jsc2.printHi();

	// Only yee namespace has declared printYee()
	// and printLol() is same.
	// Using elaborated isn't necessary
	printYee();
	printLol();
	printYeeeeeeee();

	return 0;
}
