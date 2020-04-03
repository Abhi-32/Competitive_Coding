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
ll dis[N];
ll vis[N];
vector<pll> ve;
void bfs(ll i)
{
	ll u,v;
	queue<ll> q;
	q.push(i);
	dis[i]=0;
	while(!q.empty())
	{
		u=q.front();
		q.pop();
		for(ll v: g[u])
		{
			if(!vis[v])
			{
				dis[v]=dis[u]+1;
				vis[v]=1;
				q.push(v);
			}
		}
	}
}
int main()
{
	boost();
	ll t,n,mx,m,u,v;
	cin>>t;
	for(ll k=1;k<=t;k++)
	{
		cin>>n>>m;
		while(m--)
		{
			cin>>u>>v;
			g[u].pb(v);
			g[v].pb(u);
			ve.pb({v,u});
		}
		mem(vis,0);
		for(ll i=1;i<=n;i++)
			if(vis[i]==0)
			{
				bfs(i);
			}
		ll flag=1;
		for(auto p:ve)
		{
			if((abs(dis[p.F]-dis[p.S]))%2==0)
			{
				flag=0;
				break;
			}
		}

		printf("Scenario #%lld:\n",k);
		if(flag==0)
			printf("Suspicious bugs found!\n");
		else
			printf("No suspicious bugs found!\n");
		ve.clear();
		fo(i,n+1)
			g[i].clear();
	}
}