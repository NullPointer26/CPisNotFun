/*====================================
Auther:    Shyam Makwana
Problem:   minimum-spanning-tree-5.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define MAX 100005

int parent[10001];
int ranka[10001];
struct edge
{
	int a,b,w;
};

edge arr[MAX];
bool comp(edge x,edge y)
{
	return x.w<y.w;
}

int find(int n)
{
	if(parent[n]<0)
		return n;
	
	return parent[n] = find(parent[n]);
}
bool merge(int a,int b)
{
	a=find(a);
	b=find(b);
		
	if(a==b)
		return false;

	if(ranka[a]>ranka[b])
	{
		parent[b]=a;
		ranka[a]+=ranka[b];		
	}
	else
	{
		parent[a]=b;
		ranka[b]+=ranka[a];
	}
	return true;
}


int32_t main()
{
	int n,m,sum=0;
	cin>>n>>m;

	for(int i=1;i<=n;i++)
		parent[i]=-1,ranka[i]=1;

	for(int i=0;i<m;i++)
	{
		cin>>arr[i].a>>arr[i].b>>arr[i].w;
	}
	sort(arr,arr+m,comp);

	for(int i=0;i<m;i++)
	{
		if(merge(arr[i].a,arr[i].b))
			sum+=arr[i].w;
	}
	cout<<sum<<endl;
}