#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);srand(time(NULL));
#define vec vector<ll>
#define pb push_back
#define mp make_pair
#define sz size()
#define ff first
#define ss second
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define f(i,a,b) for(i=a;i<b;i++)
#define all(v) v.begin(),v.end()
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.begin(),v.end(),greater<ll>)
#define PI 3.141592653589793238

typedef long long ll;
typedef long double ld;
// typedef pair<ll,ll> pi;

const ll N = 2e5+5;
const ll inf = 1e9;
const ll inf64 = 1e18;
const ll mod = inf + 7;

using namespace std;

void solve()
{
  ll n,i,j=1;
  cin>>n;
  if(n%2)
  {
    ll k = n*(n-1);
    k/=2;
    f(i,0,k)
    {
      cout<<j<<" ";
      j=j*(-1);
    }
  }
  else
  {
    ll cnt=1;
    for(i=1;i<n;i++)
    {
      // cout<<i<<"--> ";
      if(i%2)cout<<0<<" ";
      if(i%2)
      {
        cnt=1;
        for(j=i+1;j<n;j++)
        {
          // cout<<j<<"-"<<cnt<<"  ";
          cout<<cnt<<" ";
          cnt = cnt*(-1);
        }
      }
      else
      {
        cnt=-1;
        for(j=i;j<n;j++)
        {
          // cout<<j<<"-"<<cnt<<"  ";
          cout<<cnt<<" ";
          cnt = cnt*(-1);
        }
      }
      // cout<<"\n";
    }
  }
  cout<<"\n";
}
int32_t main()
{
    fast
    ll q=1;
    cin>>q;
    while(q--)solve();
    return 0;
}
