/*====================================
Auther:    Shyam Makwana
Problem:   jungle-run.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 35

bool vis[MAX][MAX];
int dist[MAX][MAX];
char arr[MAX][MAX];
int n,m;

bool isValid(int x,int y)
{
	if(x<1 || x>n || y<1 || y>m)
		return false;
	if(vis[x][y]==true || arr[x][y]=='T')
		return false;
	return true;
}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void bfs(int srcX,int srcY)
{
	queue<pair<int,int>> q;
	q.push({srcX,srcY});
	vis[srcX][srcY]=true;
	dist[srcX][srcY]=0;

	while(!q.empty())
	{
		int curX=q.front().first;
		int curY=q.front().second;
		q.pop();

		for(int i=0;i<4;i++)
		{
			if(isValid(curX+dx[i] ,curY+dy[i]))
			{
				int newX=curX+dx[i];
				int newY=curY+dy[i];

				q.push({newX,newY});
				dist[newX][newY] = dist[curX][curY]+1;
				vis[newX][newY]=true;
			}
		}
	}
}

int main()
{
	long long int a,b;
	cin>>n;
	m=n;
	int srcX,srcY,endX,endY;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]=='S') srcX=i,srcY=j;
			if(arr[i][j]=='E') endX=i,endY=j;
		}
	}
	bfs(srcX,srcY);
	cout<<dist[endX][endY];
}