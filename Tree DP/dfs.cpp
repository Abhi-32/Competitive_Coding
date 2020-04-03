#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int N=3e5; 
vector<int> g[N];
int a[N],dp[N];
void dfs(int u,int par)
{
	
	for(int child : g[u])
	{
		if(child==par)	continue;
		dfs(child,u);
	}
	printf("%d\n",u);
}
int main()
{
	int n,u,v;
	cin>>n;
	for(int i=0;i<n-1;i++)
		cin>>u>>v,g[u].pb(v),g[v].pb(u);
	//for(int i=1;i<=n;i++)
	//	cin>>a[i];
	dfs(1,-1);
}
/*
5
1 2
1 3
2 4
3 5
1 2 3 4 5
// 1 2 4 3 5
*/