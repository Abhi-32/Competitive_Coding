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
ll arr[102];
int main()
{
	ll t,n,mx,m,u,v,x,sum,cnt;
	cin>>t;
	while(t--)
	{
		cnt=0; sum=0;
		cin>>n;
		fo(i,n)
		{
			cin>>x;
			if(x==0)
				cnt++;
			sum+=x;
		}
		if(cnt){
			sum+=cnt;
			if(sum==0)
				cout<<cnt+1;
			else
				cout<<cnt;
		}
		else if(sum==0)
			cout<<"1";
		else
			cout<<"0";
		cout<<"\n";

	}
}