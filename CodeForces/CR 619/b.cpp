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
ll arr[N];
int main()
{
	ll t,n,mx,m,u,v,maxa=1000000000;
	cin>>t;
	while(t--)
	{
		cin>>n;
		fo(i,n)
			cin>>arr[i];

		ll l=0,h=1000000000,kmin,kmax,k,mid,mx,ans=-1,kval;

		while(l<=h)
		{
			mid=(h-l)/2+l;
			mx=INT_MIN;
			kmin=INT_MIN; kmax=maxa;
			ll flag=1;
			//printf("=%lld %lld %lld %lld %lld\n",l,h,mid,kmin,kmax);
			fo(i,n)
			{
				if(arr[i]!=-1)
				{
					if((i>0 && arr[i-1]==-1) || (i<n-1 && arr[i+1]==-1))
					{
						kmin=max(kmin,arr[i]-mid);
						kmax=min(kmax,arr[i]+mid);
					}
				}
				if(i<n-1 && arr[i]!=-1 && arr[i+1]!=-1)
				{
					mx=max(mx,abs(arr[i+1]-arr[i]));
				}
			}
			
			if(mx>mid || kmin>kmax)
				flag=0;

			if(flag)
			{
				//printf("min=%lld max=%lld mid=%lld\n",kmin,kmax,mid);
				ans=mid;
				h=mid-1;
				kval=kmax;
			}
			else
				l=mid+1;
		}
		//printf("dsas\n");
		cout<<ans<<" "<<kval<<"\n";

	}
}