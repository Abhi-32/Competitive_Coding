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
const int N=1e6+3;
ll f,s,g,u,d;
ll dis[N],vis[N];
void bfs()
{
	ll mx=-1,up,down,v;
	queue<ll> q;
	q.push(s);
	dis[s]=0;
	vis[s]=1;
	while(!q.empty())
	{
		v=q.front();
		q.pop();
		up=v+u;
		down=v-d;
		if(up<=f && !vis[up])
		{
			vis[up]=1;
			dis[up]=dis[v]+1;
			q.push(up);
		}
		if(down>=1 && !vis[down])
		{
			vis[down]=1;
			dis[down]=dis[v]+1;
			q.push(down);
		}

	}
}
int main()
{
	cin>>f>>s>>g>>u>>d;

	dis[g]=-1;
	bfs();
	if(dis[g]==-1) cout<<"use the stairs";
	else	cout<<dis[g];
}