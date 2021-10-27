/*====================================
Auther:    Shyam Makwana
Problem:   TOPOSORT.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 10005

vector<int> arr[MAX];
bool vis[MAX];
int in[MAX];
vector<int> result;

bool kahn(int n)
{
	priority_queue<int, vector<int> , greater<int>> pq;
	for(int i=1;i<=n;i++)
		if(in[i]==0)
			pq.push(i);

	while(!pq.empty())
	{
		int curr=pq.top();
		result.push_back(curr);
		pq.pop();
		for(int child : arr[curr])
		{
			in[child]--;
			if(in[child]==0)
				pq.push(child);
		}
	}
	return (result.size()==n);
}

int main()
{
	long long n,m,a,b;
	cin >>n>>m;
	while(m--)
	{
		cin >> a>>b;
		arr[a].push_back(b);
		in[b]++;
	}
	if(!kahn(n))
		cout<<"Sandro fails.";
	else
	{
		for(int v:result)
			cout<<v<<" ";
	}
}