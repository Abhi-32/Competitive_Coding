#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int N=3e5; 
vector<int> g[N];
int a[N],dp[N];
void dfs(int u,int par)
{
	int mx=0;
	for(int child : g[u])
	{
		if(child==par)	continue;
		dfs(child,u);
		mx=max(mx,dp[child]);
	}
	dp[u]=mx+a[u];
}
int main()
{
	int n,u,v;
	cin>>n;
	for(int i=0;i<n-1;i++)
		cin>>u>>v,g[u].pb(v),g[v].pb(u);
	for(int i=1;i<=n;i++)
		cin>>a[i];
	dfs(1,0);
	printf("%d\n",dp[1]);
}
/*
14
1 2
1 3
1 4
2 5
2 6
3 7
4 8
4 9
4 10
5 11
5 12
7 13
7 14
3 2 1 10 1 3 9 1 5 3 4 5 9 8
//ans 22
*/