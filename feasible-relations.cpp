/*====================================
Auther:    Shyam Makwana
Problem:   feasible-relations.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fori(i,n) for(int i=0;i<n;i++)
#define forr(i,n) for(int i=n-1;i>=0;i--)
#define cina(a)	for(int i=0;i<n;i++)cin>>a[i]
#define couta(a) for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define add(a,b) ((a%mod)+(b%mod))%mod
#define mul(a,b) ((a%mod)*(b%mod))%mod
#define __lcm(a,b) ((a*b)/__gcd(a,b))
#define endl "\n"
#define MAX 100005

vector<int> arr[1000001];
bool vis[1000001];
int cc[1000001];
int cnt,n;

void dfs(int node)
{
	vis[node]=true;
	cc[node]=cnt;
	for(int child : arr[node])
	{
		if(vis[child]==false)
			dfs(child);
	}
}

int main()
{
    long long int m,t,l,k,p,q,r,a,b,c,d,n1;
    long long int count=0,count1=0,total=0,ans=0;	
    long long int max1=INT_MIN,min=INT_MAX;
    long long int temp=0,temp1;
    fastio;
    bool flag=true,flag1=true,flag2=false,flag3=false;
    char var;	
    string str;
    long long test;

    cin >> test;

    while(test--)
    {
     	cin >> n >>m;
     	vector<pair<int,int>> edgelist;

     	fori(i,n) arr[i].clear(), vis[i]=false,cc[i]=0;

     	for(int i=0;i<m;i++)
     	{
     		cin >> a>>str>>b;

     		if(str=="=")
     		{
     			arr[a-1].push_back(b-1), arr[b-1].push_back(a-1);
     		}
     		else
     			edgelist.push_back(make_pair(a-1,b-1));
     	}
     	cnt=0;

     	for(int i=0;i<n;i++)
     	{
     		if(vis[i]==false)
     		{
     			cnt++;
     			dfs(i);
     		}
     	}

     	bool flag=true;
     	for(int i=0;i<edgelist.size();i++)
     	{
     		a=edgelist[i].first;
     		b=edgelist[i].second;

     		if(cc[a]==cc[b])
     		{
     			flag=false;
     			break;
     		}
     	}
     	
     	if(flag)
     		cout<<"YES"<<endl;
     	else
     		cout<<"NO"<<endl;
    }
}
