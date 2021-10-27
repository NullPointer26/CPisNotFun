#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define ll long long

int main()
{
    fast;
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    if (k>n)
    {
        cout<<-1;
        return 0;
    }
    
    sort(v.rbegin(),v.rend());
    cout<<v[k-1]<<" "<<0;
    return 0;
}