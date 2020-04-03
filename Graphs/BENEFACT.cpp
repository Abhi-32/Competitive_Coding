#include<bits/stdc++.h>
using namespace std;
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
const int N=2e5+3;
vector<pll> g[N];

pll bfs(ll u,ll n)
{
	ll dis[n+1],mx=0,ver=-1;
	mem(dis,-1);
	queue<ll> q;
	q.push(u);
	dis[u]=0;
	while(!q.empty())
	{
		ll v=q.front();
		q.pop();
		for(pll p:g[v])
		{
			if(dis[p.F]==-1)
			{
				dis[p.F]=dis[v]+p.S;
				q.push(p.F);
			}
			if(dis[p.F]>mx)
			{
				mx=dis[p.F];
				ver=p.F;
			}
		}
	}
	pll p;
	p.first=ver;
	p.second=mx;
	return p;
}
int main()
{
	ll t;
	cin>>t;
	while(t--){
	ll n,m,mx,u,v,x;
	cin>>n;
	fo(i,n-1)
	{
		cin>>u>>v>>x;
		g[u].pb({v,x});
		g[v].pb({u,x});
		m=u;
	}
	pll p1,p2;
	p1=bfs(m,n);
	p2=bfs(p1.first,n);
	cout<<p2.second<<"\n";
	fo(i,n+1)
		g[i].clear();
	}
}