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
set<ll,greater<ll>> g[N];
ll vis[N];
stack<ll> s;
void dfs(ll u,ll n)
{
	vis[u]=1;
	for(ll v:g[u])
	{
		if(!vis[v])
			dfs(v,n);
	}
	s.push(u);
}
int main()
{
	ll n,m,u,v,x;
	cin>>n>>m;
	while(m--)
	{
		cin>>u>>v;
		g[u].insert(v);
	}
	for(ll i=n;i>=1;i--)
	    if(!vis[i])
	        dfs(i,n);
	       
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}