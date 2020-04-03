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
ll bfs(ll u,ll n)
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
	return mx;
}
int main()
{
	ll n,m,mx,mn=INT_MIN,u=-1,v,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x!=-1)
		{
		g[x].pb(i);
		s.insert(x);
		}
	}
	for(ll k:s)
		mn=max(mn,bfs(k,n));
	if(mn==INT_MIN) mn=0;
	mn++;
	cout<<mn;

}
