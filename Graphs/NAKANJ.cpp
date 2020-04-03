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
pll p1,p2;
int x[8]={-2,-2,-1,-1,1,1,2,2};
int y[8]={-1,1,-2,2,-2,2,-1,1};
ll vis[9][9];
ll dis[9][9];
ll valid(ll a,ll b)
{
	return a>=1 && a<=8 && b>=1 && b<=8;
}
void bfs(pll p5)
{
	mem(vis,0);
	mem(dis,0);
	queue<pll> q;
	q.push(p5);
	vis[p5.F][p5.S]=1;
	dis[p5.F][p5.S]=0;
	pll p,p3,p4;
	ll a,b,flag=0;
	while(!q.empty())
	{
		p=q.front();
		q.pop();
		fo(i,8)
		{
			a=p.F+x[i]; b=p.S+y[i];
			if(valid(a,b) && !vis[a][b])
			{
				dis[a][b]=dis[p.F][p.S]+1;
				vis[a][b]=1;
				q.push({a,b});
				if(a==p2.F && b== p2.S)	flag=1;
			}
			if(flag)	break;
		}
		if(flag)	break;
	}
}
int main()
{
	boost();
	ll t,n,mx,m,u,v;
	cin>>t;
	char c1,c2;
	while(t--)
	{
		cin>>c1>>c2;
		p1={c1-'a'+1,c2-'0'};
		cin>>c1>>c2;
		p2={c1-'a'+1,c2-'0'};
		bfs(p1);
		cout<<dis[p2.F][p2.S]<<"\n";
	}
}