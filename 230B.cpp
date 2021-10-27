#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define minvec(v) min_element(v.begin(), v.end())
#define maxvec(v) max_element(v.begin(), v.end())
#define vecin(v)       \
    for (auto &it : v) \
    cin >> it
#define vecout(v)    \
    for (auto i : v) \
    cout << i << " "
const int MN = 4e5 + 2;
ll arr[MN];

void solve()
{
    ll i, a, j, c = 0, s;
    int n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        s = sqrt(a);
        for (j = 2; j * j < s; j++)
            if (s % j == 0)
                break;
        if (j * j > s && s * s == a && a > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    fast;
    solve();
    return 0;
}