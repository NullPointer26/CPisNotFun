/*====================================
Auther:    Shyam Makwana
Problem:   TDKPRIME.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;

vector<int> primes;
bool PrimeNum[90000005];

void sieve()
{
	int maxN= 90000000;

	PrimeNum[0]=PrimeNum[1]=true;

	for(int i=2;i*i<=maxN;i++)
	{
		if(!PrimeNum[i])
		{
			for(int j=i*i;j<=maxN;j+=i)
				PrimeNum[j]=true;
		}
	}
	for(int i=2;i<=maxN;i++)
		if(!PrimeNum[i])
			primes.push_back(i);
}

int main()
{
	long long n,m,k;
	cin>>n;
	sieve();
	while(n--)	
	{
		cin>>k;
		cout<<primes[k-1]<<endl;
	}
}