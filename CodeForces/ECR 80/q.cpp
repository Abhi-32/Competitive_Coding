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
	ll t,d,n,mx,m,u,v,ans;
	double p=1;
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>n>>d;
		ll flag=0;
		if(d<=n)	flag=1;
		u=(ll)sqrt(d)-1;
		ans=ceil((p*d)/(u+1));
		ans+=u;
		if(ans<=n) flag=1;

		ans=0;
		u=(ll)sqrt(d)+1;
		ans=ceil((p*d)/(u+1));
		ans+=u;
		if(ans<=n) flag=1;

		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}