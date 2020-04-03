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
ll r,c;
int x[8]={0,0,1,1,1,-1,-1,-1};
int y[8]={1,-1,0,1,-1,0,1,-1};
string s[101],str="ALLIZZWELL";
bool vis[101][101];
int valid(ll i,ll j)
{
	return i>=0 && i<r && j>=0 && j<c;
}
int solve(ll i,ll j,ll n)
{
	if(n==str.size())
		return 1;
	ll r1,c1;
	vis[i][j]=1;
	fo(k,8)
	{
		r1=i+x[k];
		c1=j+y[k];
		if(valid(r1,c1) &&  !vis[r1][c1] && s[r1][c1]==str[n])
			if(solve(r1,c1,n+1))	return 1;

	}
	vis[i][j]=0;
	return 0;
}
int main()
{
	boost();
	ll t,n,mx,m,u,v;
	cin>>t;
	while(t--)
	{
		mem(vis,0);
		cin>>r>>c;
		fo(i,r)
			cin>>s[i];

		int flag=0;
		fo(i,r)
		{
			fo(j,c)
			{
				if(s[i][j]=='A' && solve(i,j,1)){
					flag=1;
					break;
				}
			}
			if(flag)	break;
		}
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}