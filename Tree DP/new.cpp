#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
vector<int> g[10000];
int a[10000];
int in[10000],out[10000];
void dfs(int u,int p)
{
	int mx=0;
	for(int child : g[u])
	{
		if(child==p) continue;
		dfs(child,u);
		mx=max(mx,in[child]+1);
	}
	in[u]=mx;
}
void dfs2(int u,int p)
{
	int mx1=0,mx2=0,mx;
	for(int child : g[u])
	{
		if(child==p) continue;
		if(in[child]>=mx1)	mx2=mx1,mx1=in[child];
		else if(in[child]>mx2)	mx2=in[child];

	}
	for(int child : g[u])
	{
		if(child==p) continue;
		if(in[child]==mx1)
			mx=mx2;
		else
			mx=mx1;
		out[child]=1+max(out[u],1+mx);
		dfs2(child,u);
	}
}
int main()
{
	int n,u,v;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		cin>>u>>v;
		g[u].pb(v);
		g[v].pb(u);
	}
	dfs(1,-1);
	dfs2(1,-1);
	for(int i=1;i<=n;i++)
	printf("%d   ",max(in[i],out[i]));
	printf("\n");
}