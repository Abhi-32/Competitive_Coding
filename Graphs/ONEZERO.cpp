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

void bfs(ll n)
{
	pair<string,ll> p;
	queue<pair<string,ll>> q;
	q.push({"1",1});
	string s;
	ll x;
	while(!q.empty())
	{
		p=q.front();
		q.pop();
		s=p.F;
		x=p.S;
		if(x%n==0)
		{
			cout<<s<<"\n";
			break;
		}
		x=x%n;
		q.push({s+"0",x*10});
		q.push({s+"1",x*10+1});
	}
}
int main()
{
	boost();
	ll t,n,mx,m,u,v;
	cin>>t;
	while(t--)
	{
		cin>>n;
		bfs(n);
	}
}