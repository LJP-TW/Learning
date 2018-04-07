#include "myClass.h"

omgClass::omgClass(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

myClass::myClass(string name, double a, double b, double c) : secondSolution(a, b, c)
{
	this->name = name;
	firstSolution = omgClass(a, b, c);
}

ostream& operator << (ostream& outputStream, const myClass& myclass1)
{
	outputStream << myclass1.name << endl;
	return outputStream;
}
