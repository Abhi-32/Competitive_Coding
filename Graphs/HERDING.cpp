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
typedef vector<int>		gi;
typedef vector<ll>		gl;
const int mod = 1e9+7;
const int N=1e3+3;
vector<pll> g[N][N];
ll vis[N][N];
void dfs(ll i,ll j)
{
	vis[i][j]=1;
	for(auto p:g[i][j])
	{
		ll i1=p.F,j1=p.S;
		if(!vis[i1][j1])
			dfs(i1,j1);
	}
}
int main()
{
	ll n,m,u,x;
	cin>>n>>m;
	char c;
	fo(i,n)
		fo(j,m)
		{
			cin>>c;
			if(c=='S'){
                g[i][j].pb({i+1,j});
                g[i+1][j].pb({i,j});
            }
            if(c=='N'){
                g[i][j].pb({i-1,j});
                g[i-1][j].pb({i,j});
            }
            if(c=='E'){
                g[i][j].pb({i,j+1});
                g[i][j+1].pb({i,j});
            }
            if(c=='W'){
                g[i][j].pb({i,j-1});
                g[i][j-1].pb({i,j});
            }
		}
	ll cnt=0;
	fo(i,n)
		fo(j,m)
		{
			if(!vis[i][j])
			{
				cnt++;
				dfs(i,j);
			}
		}
	cout<<cnt;
}