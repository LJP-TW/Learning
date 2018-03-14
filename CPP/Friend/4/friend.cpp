#include <iostream>
#include "x.h"
#include "y.h"

int main()
{
	X x;
	Y y;
	x.member_set(5);
	y.print(x);

	return 0;
}
