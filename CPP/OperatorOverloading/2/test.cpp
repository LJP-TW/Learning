#include <iostream>

using namespace std;

class Myclass
{
};

void operator << (ostream&, Myclass)
{
	cout << "yee?" << "gg" << endl;
}


int main()
{
	Myclass a;
	cout << a;
}
