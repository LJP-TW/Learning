#ifndef MY_H
#define MY_H

#include <iostream>

using namespace std;

namespace yee 
{
	class justSimpleClass 
	{
		public:
			void printHello()
			{
				cout << "Hello" << endl;
			}
	};

	void printYee()
	{
		cout << "Yee" << endl;
	}
}

namespace lol 
{
	class justSimpleClass
	{
		public:
			void printHi()
			{
				cout << "Hi" << endl;
			}
	};

	void printLol()
	{
		cout << "lol" << endl;
	}
}

#endif
