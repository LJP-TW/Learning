#include <iostream>
#include <vector>

using namespace std;

inline int give87_inline_force() __attribute__((always_inline));

inline int give87_inline_force()
{
	cout << "WoW" << endl;
	return 0x87;
}

inline int give87_inline()
{
	return 0x87;
}

int give87()
{
	return 0x87;
}

int main()
{
	int a = give87();
	vector<int> list;

	for(int i = 0; i < 999; ++i)
		list.push_back(give87_inline());

	int gi = give87_inline();

	int gif = give87_inline_force();

	return 0;
}
