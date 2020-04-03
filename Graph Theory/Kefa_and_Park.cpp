#include<bits/stdc++.h>
using namespace std;
#define boost() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define mem(x,y) memset(x, y, sizeof(x))
#define F first
#define S second
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
const int mod = 1e9+7;
const int N=1e5+3;
vector<ll> g[N];
ll ans=0,m;
ll l[N],par[N],val[N],arr[N];

void dfs(ll curr,ll p)
{
	par[curr]=p;
	ll cnt=0;
	for(ll v:g[curr])
		if(v!=p)
		{
			cnt++;
			dfs(v,curr);
		}
	if(cnt==0)	l[curr]=1;
}

void dfs2(ll curr,ll p,ll cs,ll s,ll mx)
{
	if(val[curr])
	{
		if(s)
			cs++;
		else
		{
			cs=1;
			s=1;
		}
		mx=max(mx,cs);
	}
	else
	{
		cs=0;
		s=0;
	}
	for(ll v:g[curr])
		if(v!=p)
			dfs2(v,curr,cs,s,mx);

	if(l[curr] && mx<=m)
	{
		ans++;
	}
}
int main()
{
	ll n,u,v,x;
	cin>>n>>m;
	fo(i,n)
		cin>>val[i+1];
	fo(i,n-1)
	{
		cin>>u>>v;
		g[u].pb(v),g[v].pb(u);
	}
	if(val[1]) 	arr[1]=1;
	dfs(1,0);
	dfs2(1,0,0,0,0);
	cout<<ans;
}
