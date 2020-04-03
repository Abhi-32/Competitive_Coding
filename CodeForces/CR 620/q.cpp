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
ll arr[N],brr[N],ans,n;
int main()
{
	boost();
	ll t,mx,m,u;
	cin>>t;
	while(t--)
	{
		ans=0;
		vector<pll> v;
		cin>>n;
		fo(i,n){
			cin>>arr[i+1];
			brr[i+1]=brr[i]+arr[i+1];
		}
        ll l=1,h=n,sum=0,flag,i,j,mid;
        while(l<=h)
        {
            flag=0;
            mid=(l+h)/2;
            sum=brr[mid];
            i=1; j=mid+1;
            while(j<=n)
            {
                if(sum>0)
                    break;
                
                sum=sum-arr[i]+arr[j];
                i++;    j++;
            }
            if(sum>0)
            {
                ans=mid;
                l=mid+1;
            }
            else
                h=mid-1;
        }
        cout<<ans<<"\n";
	}
}