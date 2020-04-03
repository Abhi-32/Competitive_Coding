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
ll color[N];
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
int cyc(int u,int par)
{
    color[u]=1;
    for(auto v : g[u])
    {
        if(color[v]==1) return 1;
        if(color[v]==0 and cyc(v,u))    return 1;
    }
    color[u]=2;
    return 0;
}
bool isCyclic(int n)
{
       memset(color,0,sizeof(color));
   for(ll u=1;u<=n;u++)
    if(!color[u]){
        if(cyc(u,-1))
            return 1;
    }
    return 0;
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
	if(isCyclic(n))
		cout<<"Sandro fails.";
	else
	{
	for(ll i=n;i>=1;i--)
	    if(!vis[i])
	        dfs(i,n);
	       
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	}
}