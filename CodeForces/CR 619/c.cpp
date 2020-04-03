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
	ll t,n,mx,m,u,v;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll z=n-m,k,cnt,ans;
		k=z/(m+1);
		v=z%(m+1);

		cnt=((k*(k+1))/2)*(m+1-v)+(((k+1)*(k+2))/2)*v;
		ans=(n*(n+1))/2-cnt;
		cout<<ans<<"\n";
	}
}