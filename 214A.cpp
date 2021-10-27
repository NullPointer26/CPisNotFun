#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define ll long long

int main()
{
    fast;
    int n, m;
    cin >> n >> m;

    int cnt = 0;
    for (int i = 0; i < 1001; i++)
    {
        for (int j = 0; j < 1001; j++)
        {
            if (i * i + j == n && i + j * j == m)
            {
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}