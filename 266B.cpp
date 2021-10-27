#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    for (int i = 0; i < t; i++)
    {
        /* code */
        for (int j = 0; j < n - 1; j++)
        {
            /* code */
            if (s[j] == 'B' && s[j+1]!='B')
            {
                /* code */
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    cout<<s;

    return 0;
}