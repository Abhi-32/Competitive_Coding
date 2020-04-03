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
vector<ll> ve;
ll c;
ll vis[N];
void dfs(ll u)
{
	vis[u]=1;
	c++;
	for(ll v: g[u])
	{
		if(!vis[v])
			dfs(v);
	}
}
int main()
{
	ll t,n,mx,m,u,v;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		while(m--)
		{
			cin>>u>>v;
			g[u].pb(v);
			g[v].pb(u);
		}
		ll cnt=0,ans=1;
		for(ll i=1;i<=n;i++)
		{
			if(!vis[i])
			{
				c=0;
				dfs(i);
				cnt++;
				ve.pb(c);
			}
		}
		for(ll i:ve)
			ans=(ans*i)%mod;

		cout<<cnt<<" "<<ans<<"\n";
		ve.clear();
		fo(i,n+1)
		{
			g[i].clear();
			vis[i]=0;
		}
		
	}
}