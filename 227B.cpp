#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define ll long long

int main()
{
    fast;
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x] = i + 1;
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll i = 0, cnt1 = 0, cnt2 = 0;
    while (m--)
    {
        cnt1 += a[b[i]];
        cnt2 += (n + 1 - (a[b[i]]));
        i++;
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}