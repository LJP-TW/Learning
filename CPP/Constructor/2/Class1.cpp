#include <iostream>
#include "Class1.h"

Class1::Class1(initializer_list<int> list) : list(list)
{
	for( auto i : this->list)
		cout << i << " ";
	cout << endl;
}
