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
	ll t,n,mx,m,u,a,g,l,h,cnt;
	cin>>t;
	while(t--)
	{
		cin>>a>>m;
		g=__gcd(a,m);
		n=m/g;
		ll i=2;
		ll ans=n;
		for(ll i=2;i*i<=n;i++)
		{
			ll flag=0;
			while(n%i==0)
			{
				flag=1;
				n=n/i;
			}
			if(flag)
			{
				ans=(ans/i)*(i-1);
			};
		}
		if(n>1)
			ans=(ans/n)*(n-1);
		cout<<ans<<"\n";
	}
}