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
//vector<ll> g[N];
string str[101];
ll l;
//map<vll,ll> mp;
ll sol()
{

}
int main()
{
	ll t,n,m,u,v;

		l=0;
		cin>>n>>m;
		fo(i,n)
			cin>>str[i];

		deque<string> dq;
		for(ll i=0;i<n;i++)
		{
			if(str[i]=="")	continue;
			string s=str[i];
			reverse(s.begin(),s.end());
			for(ll j=i+1;j<n;j++)
			{
				if(s==str[j])
				{
					dq.push_front(str[i]);
					dq.push_back(str[j]);
					str[j]="";
					break;
				}
			}
		}
		string s,ans="";
		ll mx=0;
		for(ll i=0;i<n;i++)
		{
			s=str[i];
			reverse(s.begin(),s.end());
			if(s==str[i] && (s.size())>mx)
			{
				mx=s.size();
				ans=s;
			}
		}
		while(!dq.empty())
		{
			ans=dq.front()+ans+dq.back();
			dq.pop_front();
			dq.pop_back();
		}
		cout<<ans.size()<<"\n";
			cout<<ans<<"\n";
	
}