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
const int N=2e5+3;
//vector<ll> g[N];

int main()
{
	ll t,n,mx,md,u,x,a,b,k;

		cin>>n>>a>>b>>k;
		vector<ll> v;
		md=a+b;
		fo(i,n)
		{
			cin>>x;
			u=x%md;
			if(u==0)
				u+=md;
			v.pb(u-a);
		}
		sort(v.begin(),v.end());
		ll ans=0;
		double d=1;
		fo(i,n)
		{
			if(v[i]<=0)
			{
				ans++;
				continue;
			}
			x=(ll)ceil((d*v[i])/(d*a));
			if(k>=x)
			{
				ans++;
				k=k-x;
			}
			else
				break;
		}
		cout<<ans<<"\n";
}