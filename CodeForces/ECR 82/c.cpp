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
	ll t,n,mx,u,v;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
 
		map<int,char> m;
		int i=1000;
		m[i]=s[0];
		char c=m[0];
		int flag=1;
		set<char> s1;
		s1.insert(s[0]);
		for(ll j=1;j<s.size();j++)
		{
			if(m[i+1]==s[j])
			{
				i++;
			}
			else if(m[i-1]==s[j])
			{
				i--;
			}
			else if(s1.find(s[j])==s1.end() && m[i+1]==c)
			{
				m[i+1]=s[j];
				i++;
				s1.insert(s[j]);
			}
			else if(s1.find(s[j])==s1.end() && m[i-1]==c)
			{
				m[i-1]=s[j];
				i--;
				s1.insert(s[j]);
			}
			else
			{
				flag=false;
				break;
			}
		}
		s1.clear();
		if(flag)
		{
		string ans="";
		for(auto it:m)
		{
			if(it.S!=c){
				ans+=it.S;
			s1.insert(it.S);
			}
		}
 
		for(char j='a';j<='z';j++)
		{
			if(s1.find(j)==s1.end())
				ans+=j;
		}
		cout<<"YES\n";
		cout<<ans<<"\n";
		}
		else
			cout<<"NO\n";
	}
}