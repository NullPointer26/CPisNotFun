/*====================================
Auther:    Shyam Makwana
Problem:   micro-and-prime-prime-1.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll PrimeNum[1000001];
ll pp[1000001];
void sieve()
{
	ll maxN=1000000;
	for(ll i=1;i<=maxN;i++)
		PrimeNum[i]=1;
	PrimeNum[0]=PrimeNum[1]=0;

	for(ll i=2;i*i<=maxN;i++)
	{
		if(PrimeNum[i])
		{
			for(ll j=i*i;j<=maxN;j+=i)
				PrimeNum[j]=0;
		}
	}
	int cnt=0;
	for(int i=1;i<=maxN;i++)
	{
		if(PrimeNum[i]==1)
			cnt++;

		if(PrimeNum[cnt]==1)
			pp[i]=1;
		else
			pp[i]=0;
	}

	for(int i=1;i<=maxN;i++)
		pp[i]+=pp[i-1];
}

int main()
{
	long long n,m,test,l,r;
	sieve();
	cin>>test;
	while(test--)
	{
		cin>>l>>r;
		cout<<pp[r]-pp[l-1]<<endl;
	}
}	