#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l = {1, 2, 4, 5, 9};
    l.remove(1);
    l.remove(3);

    for(int n : l)
    {
        cout << n << ' ';
    }
    cout << endl;
    return 0;
}
