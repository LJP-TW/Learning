#include <iostream>
#include <string>

using namespace std;

class student
{
public:
	// Constructor
	student();
	student(string, int, int);

	// Operator Overloading
	void operator + ();					// '+a'		is equivalent to 'a.+()'
	student operator + (student& m);	// 'a + b'	is equivalent to 'a.+(b)'
	void operator += (student& m);		// 'a += b' is equivalent to 'a.+=(b)'
	void operator ++ ();				// '++a'	is equivalent to 'a.++()'
	void operator ++ (int);				// 'a++'	is equivalent to 'a.++(0)'

	// Get
	string getName() { return name; };
	int getHp() { return hp; };
	int getLv() { return level; };
private:
	string name;
	int hp;
	int level;
};

student::student()
{
	name = "";
	hp = 0;
	level = 0;
}

student::student(string n, int h, int l)
{
	name = n;
	hp = h;
	level = l;
}

void student::operator + ()
{
	hp = hp >= 0 ? hp : -hp;
}

student student::operator + (student& m)
{
	string n = name + m.name;
	int h = hp + m.hp;
	int l = level + m.level;

	return student(n, h, l);
}

void student::operator += (student& m)
{
	name += m.name;
	hp += m.hp;
	level += m.level;
}

void student::operator ++ ()
{
	hp += 100;
	level += 1;
}

void student::operator ++ (int n)
{
	hp = 0;
	level -= 5;
}

void studentState(student& s, int n)
{
	cout << n << " ===========" << endl;
	cout << "Name : " << s.getName() << endl;
	cout << "Hp   : " << s.getHp() << endl;
	cout << "Lv   : " << s.getLv() << endl;
	cout << endl;
}

int main()
{
	student s1("AXOT"	, -87, 5);
	student s2("LJP"	, 987, 5);
	student s3, s4;

	studentState(s1, 1);
	studentState(s2, 2);
	studentState(s3, 3);
	studentState(s4, 4);

	+s1;
	studentState(s1, 5);

	s3 = s1 + s2;
	studentState(s3, 6);

	s4 += s1;
	studentState(s4, 7);

	++s1;
	studentState(s1, 8);

	s1++;
	studentState(s1, 9);

	return 0;
}
