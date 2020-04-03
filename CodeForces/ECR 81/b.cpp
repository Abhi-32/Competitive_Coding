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
ll diff[N];
int main()
{
	//boost();
	ll t,n,mx,m,u,v,x;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>n>>x;
		cin>>s;
		ll ans=0,flag=0,bal=0;
		ll zero=count(s.begin(), s.end(),'0');
		ll one=n-zero;
		ll total=zero-one;
		printf("==%lld\n",total);
		for(ll i=0;i<n;i++) {
			if(total==0) {
				if(bal==x)
					flag=1;
			}
			else if(abs(x - bal)%abs(total)==0) {
				if((x - bal) / total >= 0){
					printf("i=%lld %lld\n",i,x-bal);
					ans++;
				}
			}
		
			if(s[i] == '0')
				bal++;
			else
				bal--;
		}
	
	if(flag) ans = -1;
	cout<<ans<<"\n";
	}
}
/*
1
6 353709959
110000
*/