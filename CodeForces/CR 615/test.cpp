#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mod = 1e9+7;
const int N=1e5+2;
ll arr[N];
ll fun(ll n)
{
    ll j=0;
    for(ll i=1;i<=n;i++)
    {
        if(arr[i]>0)
        {	
        	j++;
            swap(arr[i],arr[j]);
        }
    }
    return j;
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(ll i=1;i<=n;i++)
	        cin>>arr[i];
	       
	   ll cnt=fun(n);
	   for(ll i=0;i<=n;i++)
	        printf("i=%lld  ==%lld\n",i,arr[i]);
	    printf("cnt=%lld\n",cnt);
	   for(ll i=1;i<=cnt;i++)
	   {
	       if(abs(arr[i]) <=n && arr[abs(arr[i])]>0)
	            arr[abs(arr[i])] = -arr[abs(arr[i])]; 
	   }
	   ll ans=n+1;
	   
	}
}