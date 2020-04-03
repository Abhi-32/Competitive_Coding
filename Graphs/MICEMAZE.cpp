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
const int cn=1e9;
vector<pll> g[N];
ll dis[N];
ll vis[N];

void dij(ll s)
{
	priority_queue<pll,vector<pll>,greater<pll>> pq;
	ll v,u,w,we;
	fo(i,N)
		dis[i]=cn,vis[i]=0;

	dis[s]=0;
	pq.push({0,s});
	while(!pq.empty())
	{
		pll p=pq.top();
		pq.pop();
		u=p.S; we=p.F;
		if(vis[u])	continue;
		vis[u]=1;
		for(auto it:g[u])
		{
			v=it.F; w=it.S;
			if(dis[v]>dis[u]+w)
			{
				dis[v]=dis[u]+w;
				pq.push({dis[v],v});
			}
		}
	}
}
int main()
{
	ll n,m,u,v,x,s,t;
	cin>>n>>s>>t>>m;
	while(m--)
	{
		cin>>u>>v>>x;
		g[v].pb({u,x});
	}
	dij(s);
	ll ans=0;
	for(ll i=1;i<=n;i++)
		if(dis[i]<=t)	ans++;
	cout<<ans;
}