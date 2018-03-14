#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int i = 5;

	v.push_back(i);
	v.push_back(i);

	i = 6;

	cout << v[0] << endl;
	cout << v[1] << endl;
	cout << i << endl;

	return 0;
}
