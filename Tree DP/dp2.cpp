#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int N=3e5; 
vector<int> g[N];
int a[N],in[N],out[N],dp[N];
void dfs1(int u,int par)
{
	int mx=0;
	for(int child : g[u])
	{
		if(child==par)	continue;
		dfs1(child,u);
		mx=max(mx,1+in[child]);
	}
	in[u]=mx;
}
void dfs2(int u,int par)
{
	int mx1=-1,mx2=-1,mx;
	for(int v: g[u]){
		if(v==par) continue;
		if(in[v]>=mx1)	mx2=mx1,mx1=in[v];
		else if(in[v]>mx2)	mx2=in[v];
	}

	for(int v: g[u]){
		if(v==par) continue;
		if(in[v]==mx1)
			mx=mx2;
		else
			mx=mx1;		
		out[v]=max(1+out[u],2+mx);
		dfs2(v,u);
	}
}
int main()
{
	int n,u,v;
	cin>>n;
	for(int i=0;i<n-1;i++)
		cin>>u>>v,g[u].pb(v),g[v].pb(u);

	dfs1(1,0);
	dfs2(1,0);
	for(int i=1;i<=n;i++)
	{
		dp[i]=max(in[i],out[i]);
		printf("%d   ",dp[i]);
	}
	printf("\n");
}
/*
10
1 2
1 3
1 4
2 5
2 6
3 7
4 8
7 9
7 10
//3   4   3   4   5   5   4   5   5   5 
*/