#include<bits/stdc++.h>
using namespace std;
#define boost() ios_base::sync_with_stdio(false);cin.tie(0)
#define pb push_back
#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define mem(x,y) memset(x, y, sizeof(x))
#define F first
#define S second
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vll;
const int mod = 1e9+7;
const int N=1e5+3;
//vector<ll> g[N];
ll fun(ll n)
{
	return (n*(n+1))/2;
}
int main()
{
	ll t,n,k,mx=INT_MIN,mn=INT_MAX,u,v,a,b,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;

		ll ans=-1;
		ll l=1,h=k,mid,i1,i2;
		while(l<=h)
		{
			mid=(l+h)/2;

			u=fun(mid-1);
			v=fun(mid);

			if(u<k && v>=k)
			{
				ans=mid;
				break;
			}
			if(u<k)
				l=mid+1;
			else
				h=mid-1;
		}
		i1=n-ans-1;		
		ll r=fun(ans-1);
		for(ll i=n-1;i>i1;i--)
		{
			r++;
			if(r==k)
			{
				i2=i;
				break;
			}
		}
		fo(i,n)
		{
			if(i==i1 || i==i2)
				cout<<'b';
			else
				cout<<'a';
		}
		cout<<"\n";
	}
}