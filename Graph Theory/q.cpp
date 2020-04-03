#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mod = 1000000007;
const int m=1e9+7;
vector<int> g[100000];
bool vis[100000];

void dfs(int u)
{
	vis[u]=1;
	for(int v : g[u])
	{
		if(vis[v])	continue;
		dfs(v);
	}
}
int main()
{
	int n,e,u,v;
	cin>>n>>e;
	while(e--)
	{
		cin>>u>>v;
		g[u].pb(v);
		g[v].pb(u);
	}
	dfs(4);

	for(int i=1;i<=6;i++)
		printf("i=%d  %d\n",i,vis[i]);
}
/*
6 5
1 2
2 3
3 1
2 6
4 5
*/