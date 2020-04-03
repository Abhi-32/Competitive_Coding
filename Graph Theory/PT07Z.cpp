#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define mem(x,y) memset(x, y, sizeof(x))
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
const int mod = 1e9+7;
const int N=2e5+3;
vector<ll> g[N];

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
		for(ll i:g[v])
		{
			if(dis[i]==-1)
			{
				dis[i]=dis[v]+1;
				q.push(i);
			}
			if(dis[i]>mx)
			{
				mx=dis[i];
				ver=i;
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
	ll n,m,mx,u,v;
	cin>>n;
	fo(i,n-1)
	{
		cin>>u>>v;
		g[u].pb(v),g[v].pb(u);
	}
	pll p1,p2;
	p1=bfs(1,n);
	p2=bfs(p1.first,n);
	cout<<p2.second;
}
/*
10
0 1
1 2
2 3
2 9
2 4
4 5
1 6
6 7
6 8

op-5

*/