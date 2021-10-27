/*====================================
Auther:    Shyam Makwana
Problem:   MPOW.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 101
#define mod 1000000007
#define add(a,b) ((a%mod)+(b%mod))%mod
#define mul(a,b) ((a%mod)*(b%mod))%mod
#define ll long long

ll arr[MAX][MAX],I[MAX][MAX];

void mulMat(ll A[][MAX], ll B[][MAX], ll dim)
{
	ll res[dim+1][dim+1];
	for(ll i=1;i<=dim;i++)
	{
		for(ll j=1;j<=dim;j++)
		{
			res[i][j]=0;
			for(ll k=1;k<=dim;k++)
				res[i][j] = add(res[i][j],mul(A[i][k],B[k][j]));
		}
	}
	for(ll i=1;i<=dim;i++)
		for(ll j=1;j<=dim;j++)
			A[i][j]=res[i][j];
}
void power(ll A[][MAX], ll dim, ll n)
{
	for(ll i=1;i<=dim;i++)
	{
		for(ll j=1;j<=dim;j++)
		{
			if(i==j)
				I[i][j]=1;
			else
				I[i][j]=0;
		}
	}	
	while(n)
	{
		if(n%2!=0)
			mulMat(I,A,dim),n--;

		mulMat(A,A,dim);
		n/=2;
	}

	for(ll i=1;i<=dim;i++)
		for(ll j=1;j<=dim;j++)
			A[i][j]=I[i][j];
}
void printMat(ll A[][MAX],ll dim)
{
	for(ll i=1;i<=dim;i++)
	{
		for(ll j=1;j<=dim;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}

int main()
{
	long long n,m,dim,test;
	cin>>test;
	while(test--)
	{
		cin>>dim>>n;
		for(ll i=1;i<=dim;i++)
			for(ll j=1;j<=dim;j++)
				cin>>arr[i][j];

		power(arr,dim,n);
		printMat(arr,dim);
	}
}