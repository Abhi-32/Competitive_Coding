#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mod = 1000000007;
const int m=1e9+7;
const int N=1e5+3;
vector<int> g[N];
int a[N];
int in[N];
int out[N];

void dfs(int u,int par)
{
	in[u]=a[u];
	int mx=0;
	for(int v : g[u])
		if(v!=par)
		{
			dfs(v,u);
			mx=max(mx,in[v]);
		}
	in[u]+=mx;
	
}

void dfs2(int u,int par)
{
	int mx=0,mx1=0,mx2=0;
	for(int v : g[u])
		if(v!=par)
		{
			if(in[v]>mx1)
			{
				mx2=mx1;
				mx1=in[v];
			}
			else if(in[v]>mx2)
				mx2=in[v];
		}

	for(int v : g[u])
		if(v!=par)
		{
			if(in[v]==mx1)	mx=mx2;
			else			mx=mx1;

			out[v]=a[v]+max(a[u]+mx,out[u]);
			dfs2(v,u);
		}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,u,v;
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<n;i++)
		{
			cin>>u>>v;
			g[u].pb(v);
			g[v].pb(u);
		}
		out[1]=a[1];

		dfs(1,-1);
		dfs2(1,-1);
		for(int i=1;i<=n;i++)
			cout<<max(in[i],out[i])<<" ",g[i].clear();
		cout<<"\n";
		//for(int i=1;i<=n;i++)
		    //g[i].clear();
	}
}