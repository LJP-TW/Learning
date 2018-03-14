#include <iostream>

using namespace std;

template<typename Yee>
class Hello
{
public:
	void set(Yee, Yee);
	void add();
	Yee get();
private:
	Yee a, b, c;
};

template<typename TT>
void Hello<TT>::set(TT i, TT i2)
{
	a = i;
	b = i2;
}

template<typename QQ>
void Hello<QQ>::add()
{
	c = a + b;
}

template<typename XD>
XD Hello<XD>::get()
{
	return c;
}

int main()
{
	Hello<int> iHello;
	Hello<double> dHello;

	int i;
	double d;

	iHello.set(2, 3);
	iHello.add();
	i = iHello.get();

	dHello.set(5.6, 6.89);
	dHello.add();
	d = dHello.get();

	cout << "iHello c = " << i << endl;
	cout << "dHello c = " << d << endl;

	return 0;
}
