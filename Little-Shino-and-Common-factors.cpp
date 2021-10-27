/*====================================
Auther:    Shyam Makwana
Problem:   Little-Shino-and-Common-factors.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define add(a,b) ((a%mod)+(b%mod))%mod
#define mul(a,b) ((a%mod)*(b%mod))%mod
#define __lcm(a,b) ((a*b)/__gcd(a,b))
#define endl "\n"
#define MAX 100005

void primeFactor(int n)
{
	int cnt=0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{			
			if(n%i==i)			
				cnt++;
			else
				cnt+=2;
		}
	}
	cout<<cnt+1<<endl;
}


int32_t main()
{
	int n,m,a,b,c,d,n1;	
	int max1=INT_MIN,min1=INT_MAX;
	bool flag=true,flag1=true;
	fastio;	
	string str;

	cin>>n>>m;
	c=__gcd(n,m);

	primeFactor(c);
}
