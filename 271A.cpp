#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;

    int a, x;
    while (true)
    {
        /* code */
        unordered_map<int, int> mp;
        y += 1;
        a = y;
        while (a>0)
        {
            /* code */
            x = a % 10;
            if (mp.find(x) != mp.end())
            {
                /* code */
                break;
            }
            else
            {
                /* code */
                mp[x];
            }
            if (mp.size() == 4)
            {
                /* code */
                cout << y;
                return 0;
            }
            a = a / 10;
        }
    }
}