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
//vector<ll> g[N];
ll arr[10000];
int main()
{
	ll t,n,x,m,u,v,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;

		fo(i,n)
			cin>>arr[i];

		k=min(k,m-1);
		ll ans=0,mx=INT_MIN,mn;
		ll n1=m-1-k;

		for(ll i=0;i<=k;i++)
		{
			mn=INT_MAX;
			for(ll j=0;j<=n1;j++)
			{
				ll st,lt;
				st=i+j;
				lt=i+j+(n-m);
				mx=max(arr[st],arr[lt]);
				mn=min(mn,mx);
			}
			ans=max(ans,mn);
		}
		cout<<ans<<"\n";
	}
}