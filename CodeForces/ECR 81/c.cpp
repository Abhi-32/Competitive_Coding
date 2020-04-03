#include<bits/stdc++.h>
#include<unistd.h>
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
	ll t,n,mx,u,cnt,ind;
	cin>>t;
	while(t--)
	{
		string s,str;
		cin>>s>>str;
		set<pii> st;
		n=str.size();
		vector<ll> v[26];
		fo(i,s.size())
			v[s[i]-'a'].pb(i);

		cnt=0;	
		ll i=0;
		while(i<n)
		{
			ll fl=1;
			ind=-1;
			cnt++;
			while(i<n)
			{
				vector<ll> &a=v[str[i]-'a'];
				auto it=upper_bound(a.begin(),a.end(),ind);
				if(it==a.end())	break;
				fl=0;
				ind=*it;
				i++;
			}
			if(fl)	break;
		}
		if(i!=n) cnt=-1;
		cout<<cnt<<"\n";
	}
}