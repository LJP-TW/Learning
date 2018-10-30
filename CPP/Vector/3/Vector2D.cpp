#include <iostream>
#include <vector>
#define N 9

using namespace std;

int main()
{
    vector<int> table[N][N];
    vector<vector<vector<int>>> table2;

    for(int y = 0; y < N; ++y)
    {
        table2.push_back(vector<vector<int>>(0));

        for(int x = 0; x < N; ++x)
        {
            table[y][x].push_back(1);
            table2[y].push_back(vector<int>(0));
            table2[y][x].push_back(1);
        }
    }

    for(int y = 0; y < N; ++y)
    {
        for(int x = 0; x < N; ++x)
        {
            cout << table[y][x][0] << " ";
        }
        cout << endl;
    }

    for(int y = 0; y < N; ++y)
    {
        for(int x = 0; x < N; ++x)
        {
            cout << table2[y][x][0] << " ";
        }
        cout << endl;
    }

    return 0;
}
