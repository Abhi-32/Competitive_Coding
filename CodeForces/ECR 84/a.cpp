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

int main()
{
	ll t,k,n,mx=INT_MIN,mn=INT_MAX,u,v,a,b,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		d=(ll)sqrt(n);
		ll flag=0;

		if((n%2==k%2) && k<=d)
			flag=1;
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}