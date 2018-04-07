#include <iostream>
#include "Class1.h"

using namespace std;

int main()
{
	Class1 C1_1 = {123, 234, 345};
	Class1 C1_2 ({456, 567, 789});
	Class1 C1_3 {890, 901, 12};
}
