#include<bits/stdc++.h>
using namespace std;
#define boost() ios_base::sync_with_stdio(false);cin.tie(0)
#define pb push_back
#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define mem(x,y) memset(x, y, sizeof(x))
#define F first
#define S second
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vll;
const int mod = 1e9+7;
const int N=2e5+3;
vector<ll> g[N];
ll p[N],tin[N],tout[N],dis[N];
ll ver[N];
ll T=1;
void dfs(ll u,ll par,ll d)
{
	dis[u]=d;
	p[u]=par;
	tin[u]=T++;
	for(ll v:g[u])
		if(v!=par)
			dfs(v,u,d+1);
	tout[u]=T++;
}
ll anc(ll c,ll p)
{
	return tin[p]<=tin[c] && tout[p]>=tout[c];
}
int main()
{
	boost();
	ll t,n,m,k,mx=INT_MIN,mn=INT_MAX,u,v,a,b,d;
	cin>>n>>m;
	fo(i,n-1)
	{
		cin>>u>>v;
		g[u].pb(v);
		g[v].pb(u);
	}
	dfs(1,0,0);

	while(m--)
	{
		cin>>k;
		fo(i,k)
			cin>>ver[i];
		ll u=ver[0];
		d=dis[u];
		fo(i,k)
			if(dis[ver[i]]>dis[u])
				u=ver[i];

		ll flag=1,pr;
		fo(i,k)
		{
			pr=p[ver[i]];
			if(pr!=0)
			{
				if(anc(u,pr)==0)
				{
					flag=0;
					break;
				}
			}
		}
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		}
}