#include <iostream>

using namespace std;

class Y 
{
private:
	int a;
	friend void friend_set(Y&, int);
	friend int friend_get(Y&);
};

void friend_set(Y& y, int i)
{
	y.a = i;
}

int friend_get(Y& y)
{
	return y.a;
}

int main()
{
	Y y;
	int i;

	friend_set(y, 5);
	i = friend_get(y);

	cout << i << endl;

	return 0;
}
