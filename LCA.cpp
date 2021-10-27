/*====================================
Auther:    Shyam Makwana
Problem:   LCA.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int LcaArr[1001][10];
int level[1001];
int parent[1001];
int MaxN,n;
vector<int> arr[1001];

void dfs(int node,int par, int lev)
{
	parent[node]=par;
	level[node]=lev;
	LcaArr[node][0]=par;	
	for(int child : arr[node])
	{
		if(child!=par)
			dfs(child,node,lev+1);
	}
}
void preCalLca()
{
	dfs(1,-1,0);	
	for(int i=1;i<=MaxN;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(LcaArr[j][i-1]!=-1)
			{
				int par=LcaArr[j][i-1];
				LcaArr[j][i] = LcaArr[par][i-1];
			}			
		}
	}
}
int lca(int a, int b)
{
	if(level[a] > level[b])
		swap(a,b);
	int d=level[b]-level[a];
	while(d>0)
	{
		int i=log2(d);
		b=LcaArr[b][i];
		d-=(1<<i);
	}
	if(a==b)
		return a;

	for(int i=MaxN;i>=0;i--)
	{
		if(LcaArr[a][i]!=-1 && (LcaArr[a][i] != LcaArr[b][i]) )
		{
			a=LcaArr[a][i];
			b=LcaArr[b][i];
		}
	}
	return parent[a];
}
int32_t main()
{	
	int test,m,a,b;
	cin>>test;
	for(int i=1;i<=test;i++)
	{
		cin>>n;
		MaxN=log2(n);
		for(int i=1;i<=n;i++)
			arr[i].clear();

		for(int i=1;i<=n;i++)
		{
			cin>>m;
			for(int j=0;j<m;j++)
			{
				cin>>a;
				arr[i].push_back(a);
			}
		}		
		preCalLca();
		
		cin>>m;
		cout<<"Case "<<i<<":\n";
		for(int i=0;i<m;i++)
		{
			cin>>a>>b;
			cout<<lca(a,b)<<endl;
		}
	}
	cout<<log2(7)<<endl;
}