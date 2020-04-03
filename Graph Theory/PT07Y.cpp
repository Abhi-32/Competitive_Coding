#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define mem(x,y) memset(x, y, sizeof(x))
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
const int mod = 1e9+7;
const int N=2e5+3;
vector<ll> g[N];
bool vis[N];
int cyc=0;
void dfs(ll curr,ll par)
{
	vis[curr]=1;
	for(ll i:g[curr])
	{
		if(vis[i]==0)
			dfs(i,curr);
		else if(i!=par)
			cyc=1;
	}
}
int main()
{
	mem(vis,0);
	ll n,m,mx,u,v;
	cin>>n>>m;
	fo(i,m)
	{
		cin>>u>>v;
		g[u].pb(v),g[v].pb(u);
	}
	dfs(1,-1);
	int flag=cyc;
	fo(i,n)
	{
		if(vis[i+1]==0)	flag=1;
	}
	if(flag)
		cout<<"NO";
	else
		cout<<"YES";

}
