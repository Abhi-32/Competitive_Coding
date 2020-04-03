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
ll dis[N];
ll vis[N];
int main()
{
	boost();
	ll t,n,mx,u,v,d,x,r,des;
	cin>>t;
	unordered_map<string,ll> m;
	while(t--)
	{
		fo(i,10003)	g[i].clear();
		string s,s1,s2;
		cin>>n;
		for(ll i=1;i<=n;i++)
		{
			cin>>s;
			m[s]=i;
			cin>>d;
			while(d--)
			{
				cin>>u>>x;
				g[i].pb({u,x});
			}
		}
		cin>>r;
		while(r--)
		{
			cin>>s1>>s2;
			des=m[s2];
			pll p;
			priority_queue<pll,vector<pll>,greater<pll>> pq;
			u=m[s1];
			pq.push({0,u});
			fo(i,10003)
			{
				dis[i]=LLONG_MAX;
				vis[i]=0;
			}
			dis[u]=0;
			while(!pq.empty())
			{
				p=pq.top();
				pq.pop();
				d=p.F;
				u=p.S;
				if(vis[u])	continue;
				vis[u]=1;
				for(auto it:g[u])
				{
					ll x=it.F,w=it.S;
					if(dis[x]>dis[u]+w){
						dis[x]=dis[u]+w;
						pq.push({dis[x],x});
					}
				}
			}
			cout<<dis[des]<<"\n";
		}
	}
}