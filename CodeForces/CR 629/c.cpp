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

int main()
{
	ll t,n,mx=INT_MIN,mn=INT_MAX,u,v,d;
	cin>>t;
	while(t--)
	{
		string a="",b="",s;
		cin>>n>>s;
		ll flag=0;
		fo(i,n)
		{
			d=s[i]-'0';
			if(flag==0)
			{
				if(d==0)
				{
					a+="0";
					b+="0";
				}
				if(d==1)
				{
					a+="1";
					b+="0";
					flag=1;
				}
				if(d==2)
				{
					a+="1";
					b+="1";
				}
			}
			else
			{
				if(d==0)
				{
					a+="0";
					b+="0";
				}
				if(d==1)
				{
					a+="0";
					b+="1";
				}
				if(d==2)
				{
					a+="0";
					b+="2";
				}
			}
		}
		cout<<a<<"\n"<<b<<"\n";
	}
}