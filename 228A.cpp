#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<ll> s;
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);

    cout << 4 - s.size();

    return 0;
}