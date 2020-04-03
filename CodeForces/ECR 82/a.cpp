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
	ll t,n,mx,m,u,v,f,cnt;
	cin>>t;
	while(t--)
	{
		cnt=0;
		string s;
		cin>>s;
		n=s.size();
		ll i=0,j=n-1;
		while(i<n && s[i]=='0')
			i++;
		
		while(j>=0	&& s[j]=='0')
			j--;

		for(ll k=i;k<=j;k++)
			if(s[k]=='0')
				cnt++;
		cout<<cnt<<"\n";
	}
}