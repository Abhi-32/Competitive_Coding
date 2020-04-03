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
ll arr[N],brr[N];
int main()
{
	ll n,m,u,x,a,b;
	cin>>n;
	fo(i,n)
		cin>>arr[i];
	
	vector<ll> v[32];
	ll idx=0;
	fo(i,n)
	{
		fo(j,31)
		{
			if(arr[i]&(1ll<<j))
			{
				v[j].pb(i);
			}
		}
	}
	fo(i,31)
		if(v[i].size()==1)
			idx=v[i][0];

	cout<<arr[idx]<<" ";
	fo(i,n)
		if(i==idx)
			continue;
		else
			cout<<arr[i]<<" ";

}