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

int main()
{
	ll t,n,m,u,v,t1,l,h,mn,mx;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		mx=m; mn=m;
		ll flag=1;
		ll pt=0,d;
		fo(i,n)
		{
			cin>>t1>>l>>h;
			d=t1-pt;
			pt=t1;
			if(mx+d<l || mn-d>h)
				flag=0;
			mn=max(mn-d,l);
			mx=min(mx+d,h);
		}
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}
}