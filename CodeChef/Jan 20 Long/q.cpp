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
vector<ll> g[N];

int main()
{
	boost();
	ll t,n,mx,m,u,v,s;
	ll w[3];
	cin>>t;
	while(t--)
	{
		cin>>s>>w[0]>>w[1]>>w[2];
		ll sum=0,mn=INT_MAX,cnt=1;
		for(ll i=0;i<3;i++)
		{
			sum+=w[i];
			if(sum>s)
			{
				sum=w[i];
				cnt++;
			}
		}
		mn=min(mn,cnt);
		cnt=1;
		for(ll i=2;i>=0;i--)
		{
			sum+=w[i];
			if(sum>s)
			{
				sum=w[i];
				cnt++;
			}
		}
		mn=min(mn,cnt);
		cout<<mn<<"\n";
	}
}