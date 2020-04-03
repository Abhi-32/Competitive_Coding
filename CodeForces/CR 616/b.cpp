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
const int N=1e6+1;
//vector<ll> g[N];
ll arr[N];
int main()
{
	//boost();
	ll t,x,n,mx,m,u,v,d,cnt;
	cin>>t;
	while(t--)
	{
		cin>>n;
		fo(i,n)
			cin>>arr[i];
		ll flag=0,l=0,r=n;
		for(ll i=0;i<n;i++)
		{
			if(arr[i]<i)
				break;
			l=i;
		}
		for(ll i=n-1;i>=0;i--)
		{
			if(arr[i]<(n-i-1))
				break;
			r=i;
		}
		if(l>=r)
			flag=1;
		if(flag)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}