#include <iostream>

using namespace std;

class Father
{
public:
    Father();
    virtual void print();
};

class Child : public Father
{
public:
    Child();
    virtual void print();
};

void func(Father *fp)
{
    fp->print();
}

int main()
{
    Father f;
    cout << endl;

    Child c;
    cout << endl;

    f.print();
    cout << endl;

    c.print();
    cout << endl;

    Father *fp = &c;
    fp->print();
    cout << endl;

    func(&c);
    cout << endl;
}

Father::Father()
{
    cout << "Father Constructor" << endl;
}

void Father::print()
{
    cout << "Father print" << endl;
}

Child::Child()
{
    cout << "Child Constructor" << endl;
}

void Child::print()
{
    cout << "Child print" << endl;
}
