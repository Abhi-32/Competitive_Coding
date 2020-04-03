#include<bits/stdc++.h>
using namespace std;
#define boost() ios_base::sync_with_stdio(false);cin.tie(0)
#define pb push_back
#define ll int
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
ll arr[N],brr[N],best[N];
int main()
{
	boost();
	ll t,mx,m,u,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(ll i=1;i<=n;i++)
		{
			cin>>arr[i];
			brr[i]=brr[i-1]+arr[i];
		}
		best[n]=brr[n];
		for(ll i=n-1;i>=1;i--)
		    best[i]=max(best[i+1],brr[i]);
		
		ll  ans=0,maxsum=0,i=1,j=1;
		
	    while(j<=n)
		{
		    maxsum=best[j]-brr[i-1];
		    if(maxsum>0)
		        ans=max(ans,j-i+1);
		    else
		        i++;
		    j++;
		}
	    cout<<ans<<"\n";
	}
}