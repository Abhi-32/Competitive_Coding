#include<bits/stdc++.h>
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
typedef vector<ll>		vll;
const int mod = 1e9+7;
const int N=1e5+3;
//vector<ll> g[N];
ll vis[N];
int main()
{
	//boost();
	ll t,n,k,mx=INT_MIN,mn=INT_MAX,u,a,b,d,x;
	cin>>t;
	while(t--)
	{
		a=-1;
		cin>>n;
		fo(i,n+1)
			vis[i]=0;
		ll f1=1,f2;
		fo(i,n)
		{
			cin>>k;
			f2=1;
			fo(j,k)
			{
				cin>>x;
				if(f2==0)
					continue;
				if(vis[x]==0)
				{
					vis[x]=1;
					f2=0;
				}
			}
			if(f1 && f2)
			{
				f1=0;
				a=i+1;
			}
		}
		if(a==-1)
			cout<<"OPTIMAL\n";
		else
		{
			for(ll i=1;i<=n;i++)
				if(vis[i]==0)
				{
					b=i;
					break;
				}
			cout<<"IMPROVE\n";
			cout<<a<<" "<<b<<"\n";
		}
	}
}