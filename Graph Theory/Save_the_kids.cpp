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
ll vis[N],p[N];

void dfs(ll curr,ll par)
{
	p[curr]=par;
	for(ll v:g[curr])
		if(v!=par)
			dfs(v,curr);
}
int main()
{
	ll t,n,m,u,v,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		fo(i,n-1)
		{
			cin>>u>>v;
			g[u].pb(v);
			g[v].pb(u);
		}		

		dfs(1,0);
		cin>>m;
		mem(vis,0);
		ll cnt=n;
		fo(i,m)
		{
			cin>>x;
			while(vis[x]==0 && x!=0)
			{
				vis[x]=-1;
				cnt--;
				x=p[x];
			}
			cout<<cnt<<"\n";
		}
		//fo(i,n+1)
		//	printf("i=%lld  %lld\n",i,p[i]);
	}
}