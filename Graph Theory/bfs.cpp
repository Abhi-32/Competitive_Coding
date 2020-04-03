#include<bits/stdc++.h>
using namespace std;
#define boost() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define mem(x,y) memset(x, y, sizeof(x))
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
const int mod = 1e9+7;
const int N=2e5+3;
vector<ll> g[N];
unordered_set<ll> s,s2;
ll dis[N];
void bfs(ll u)
{
	mem(dis,-1);
	queue<ll> q;
	q.push(u);
	dis[u]=1;
	while(!q.empty())
	{
		ll v=q.front();
		q.pop();
		for(ll i:g[v])
		{
			if(dis[i]==-1)
			{
				dis[i]=dis[v]+1;
				q.push(i);
			}
		}
	}
}
int main()
{
	ll n,u,v,x;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{  
	    cin>>u>>v;
	    g[u].pb(v);
	    g[v].pb(u);
	}
	bfs(1);
	cin>>x;
	ll ans=0;
	for(ll i=1;i<=n;i++)
	    if(dis[i]==x)
	        ans++;
	cout<<ans;

}