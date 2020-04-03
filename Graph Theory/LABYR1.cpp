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
char s[1001][1001];
ll dr[4]={0,0,1,-1};
ll dc[4]={1,-1,0,0};
ll mx,r,c;
int valid(pll &p)
{
	return p.F>=0 && p.F<r && p.S>=0 && p.S<c;
}
pll bfs(pll u)
{
	pll p;
	queue<pll> q;
	q.push(u);
	ll dis[1001][1001]={0};
	dis[u.F][u.S]=0;
	while(!q.empty())
	{
		pll cur=q.front(),nxt;
		q.pop();

		fo(i,4)
		{
			nxt.F=cur.F+dr[i];
			nxt.S=cur.S+dc[i];
			if(valid(nxt) && s[nxt.F][nxt.S]=='.' && !dis[nxt.F][nxt.S])
			{
				dis[nxt.F][nxt.S]=dis[cur.F][cur.S]+1;
				if(dis[nxt.F][nxt.S]>mx)
				{
					mx=dis[nxt.F][nxt.S];
					p=nxt;
				}
				q.push(nxt);
			}
		}
	}
	return p;
}

int main()
{
	boost();
	ll t;
	cin>>t;
	while(t--)
	{
		mx=0;
		cin>>c>>r;
		fo(i,r)
		cin>>s[i];
		pll p;
		int flag=0;
		fo(i,r)
		{
			fo(j,c)
			{
				if(s[i][j]=='.')
				{
					p={i,j};
					flag=1;
					break;
				}
			}
			if(flag)	break;
		}
		pll p1,p2;
		p1=bfs(p);
		p2=bfs(p1);
		cout<<"Maximum rope length is "<<mx<<".\n";
	}
}
/*
1
7 6
#######
#.#.###
#.#.###
#.#.#.#
#.....#
#######
*/