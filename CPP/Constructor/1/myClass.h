#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
#include <string>

using namespace std;

class myClass
{
public:
	string name;
	int level;

	myClass(string, int, int);

	friend ostream& operator << (ostream&, const myClass&);
};

#endif
