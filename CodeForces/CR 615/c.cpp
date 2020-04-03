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
	ll t,n,mx,u,v,d,a,b,c,m;
	cin>>t;
	while(t--)
	{
		cin>>n;
		b=-1;
		for(ll i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				n/=i;
				a=i;
				break;
			}
		}
		for(ll i=2;i*i<=n;i++)
		{
			if(n%i==0 && i!=a)
			{
				n/=i;
				b=i;
				break;
			}
		}
		if(b!=-1 && n!=1 && n>b)
		{
			cout<<"YES\n";
			cout<<a<<" "<<b<<" "<<n<<"\n";
		}
		else
			cout<<"NO\n";
	}
}


/*
int main()
{
	boost();
	ll t,n,mx,u,v,d,a,b,c,m;
	cin>>t;
	while(t--)
	{
		ll flag=0;
		cin>>n;
		m=n;
		vector<ll> ve;
		for(ll i=2;i<=m;i++)
		{
			for(ll j=i+1;j<=m;j++)
			{
				u=i*j;
				if(n%u==0 && n/u>j)
				{
					a=i; b=j; c=n/u;
					flag=1;
				}
				if((n/u)<j){
					m=j;
					break;
				}
			}
			if(flag)	
				break;
		}
	if(flag==1)
	{
		cout<<"YES\n";
		cout<<a<<" "<<b<<" "<<c<<"\n";
	}
	else
		cout<<"NO\n";
	}
}*/