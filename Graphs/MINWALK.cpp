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
vector<pll> g[N];
ll vis[N],par[N];
ll disS[N],disD[N],disX[N];
void dij(ll s,ll dis[N])
{
    ll n,m,u,v,x,w,we;
    priority_queue<pll,vector<pll>,greater<pll>> pq;
	fo(i,N)
		dis[i]=(ll)1e18,vis[i]=0;
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
				par[v]=u;
			}
		}
	}
}
int main()
{
	boost();
	ll t,n,mx,m,u,v,s,d,x,w;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		cin>>s>>d>>x;
		while(m--)
		{
			cin>>u>>v>>w;
			g[u].pb({v,w}),g[v].pb({u,w});
		}
		ll ans=(ll)1e18;
		dij(s,disS);
		dij(x,disX);
		dij(d,disD);
		for(ll i=1;i<=n;i++){
			ans=min(ans,disS[i]+disX[i]+disD[i]);
			g[i].clear();
		}
		cout<<ans<<"\n";
	}
}