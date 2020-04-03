-#include<bits/stdc++.h>
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
typedef vector<ll>		vl;
const int mod = 1e9+7;
const int N=1e6+3;
ll arr[N];

int main()
{
	boost();
	ll t,n,mx=INT_MIN,m,u,v;
	cin>>t;
	while(t--)
	{
		mx=INT_MIN,
		cin>>n;
		fo(i,n){
			cin>>arr[i];
			if(arr[i]>mx)
				mx=arr[i];
		}

		ll ans=0,val;
		printf("mx=%lld\n",mx);
		fo(i,n-1)
		{
			val=abs(arr[i+1]-arr[i]);
			if(val>ans && val<mx)
				ans=val;
		}
		cout<<ans<<"\n";
	}
}