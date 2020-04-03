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
bool vis[N];

void dfs(ll u)
{
	vis[u]=1;
	for(ll v:g[u])
		if(!vis[v])
			dfs(v);
}

int main()
{
	boost();
	ll t,n,mx,m,u,v;
	cin>>t;
	while(t--)
	{
		mem(vis,0);
		cin>>n;
		cin>>m;
		fo(i,m)
		{
			cin>>u>>v;
			g[u].pb(v);
			g[v].pb(u);
		}
		ll cnt=0;

		fo(i,n)
		{
			if(!vis[i])
			{
				dfs(i);
				cnt++;
			}
			g[i].clear();
		}
		cout<<cnt<<"\n";
	}
}