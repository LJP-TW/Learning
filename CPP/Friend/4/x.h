#ifndef X_H
#define X_H

class X
{
public:
	void member_set(int i);

private:
	int a;
	friend class Y; // This make class Y can access to the private members of X
};

#endif
