#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
#include <string>

using namespace std;

class omgClass
{
public:
	omgClass(double, double, double);
private:
	double a;
	double b;
	double c;
};

class myClass
{
public:
	string name;
	// For this kind of data member, you have 2 way to init it.
	// First way : Init it at header file
	omgClass firstSolution = omgClass(1, 2, 3);
	// Second way : Init it by using 'Initializer lists' (see constructor)
	omgClass secondSolution;

	myClass(string, double, double, double);

	friend ostream& operator << (ostream&, const myClass&);
};

#endif
