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
const int N=2e5+3;
ll arr[N],brr[N];

int main()
{
	ll t,n,mx,u;
	cin>>t;
	while(t--)
	{
		mem(arr,0);
		mem(brr,0);
		ll x=0,y=0,px=0,py=0;
		char c;
		map<pll,vector<ll>> m;
		cin>>n;
		m[{0,0}].pb(0);
		fo(i,n)
		{
			cin>>c;
			if(c=='R')	x++;
			else if(c=='L')	x--;
			else if(c=='U')	y++;
			else	y--;

			m[{x,y}].pb(i+1);
		}
		ll mn=INT_MAX,l,r;
		
		for(auto it:m)
		{
			vector<ll> &v=it.S;
			for(ll i=1;i<v.size();i++)
			{
				if((v[i]-v[i-1]+1)<=mn)
				{
					l=v[i-1];
					r=v[i];
					mn=r-l+1;
				}
			}
		}	
			if(mn==INT_MAX)
				cout<<"-1\n";
			else
			cout<<l+1<<" "<<r<<"\n";
		
	}
}