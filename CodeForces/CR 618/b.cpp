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
//vector<ll> g[N];
ll arr[N];
int main()
{
	ll t,n,mx,m,u,v,ans;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n=2*n;
		fo(i,n)
			cin>>arr[i];

		sort(arr,arr+n);
		u=arr[n/2];
		v=arr[(n/2-1)];
		ans=u-v;

		cout<<ans<<"\n";
	}
}