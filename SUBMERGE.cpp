/*====================================
Auther:    Shyam Makwana
Problem:   SUBMERGE.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 100005

vector<int> arr[MAX];
bool vis[MAX];
int in[MAX],low[MAX],timer;
set<int> AP;

void dfs(int node,int parent)
{
	vis[node]=true;
	in[node]=low[node]=timer;
	timer++;
	int children=0;
	for(int child : arr[node])
	{
		if(child==parent)
			continue;
		if(vis[child]==true)
			low[node]=min(low[node],in[child]);
		else
		{
			dfs(child,node);
			if(low[child]>=in[node] && parent!=-1)
				AP.insert(node);
			children++;
			low[node]=min(low[node],low[child]);
		}
	}
	if(parent==-1 && children>1)
		AP.insert(node);
}

int main()
{
	long long n,m,a,b;
	while(1)
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++)
			arr[i].clear(),vis[i]=false,in[i]=0,low[i]=0;
		timer=0;
		AP.clear();
		
		if(n==0 && m==0)
			break;

		while(m--)
		{
			cin >>a>>b;
			arr[a].push_back(b);
			arr[b].push_back(a);
		}
		
		for(int i=1;i<=n;i++)
		{
			if(vis[i]==false)
				dfs(i,-1);
		}
		cout<<AP.size()<<endl;
	}
}	