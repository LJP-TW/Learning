#include "myClass.h"

myClass::myClass(string name, int level, int nonsense)
{
	this->name = name;
	this->level = level;
	cout << nonsense << endl;
}

ostream& operator << (ostream& outputStream, const myClass& myclass1)
{
	outputStream << myclass1.name << " " << myclass1.level << endl;
	return outputStream;
}
