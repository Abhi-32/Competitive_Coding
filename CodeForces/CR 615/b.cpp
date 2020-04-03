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
ll arr[1001][1001];
int main()
{
	ll t,mx,u,n,x,y;
	cin>>t;
	while(t--)
	{
		vector<pll> v;
		cin>>n;
		fo(i,n)
		{
			cin>>x>>y;
			arr[x][y]=1;
			v.pb({x,y});
		}
		sort(v.begin(),v.end());
		ll i=0,j=0,flag=1,i1,j1,k;
		string s="";
		for(auto p:v)
		{
			i1=p.F;
			j1=p.S;
			if(i1<i || j1<j)
			{
				flag=0;
				break;
			}
			k=i1-i;
		while(k--)
			s+="R";
		k=j1-j;
		while(k--)
			s+="U";
		i=i1;
		j=j1;
		}
		

		if(flag)
		{
			cout<<"YES"<<"\n";
			cout<<s<<"\n";
		}
		else
			cout<<"NO\n";
	}
}