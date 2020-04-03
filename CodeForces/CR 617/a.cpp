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
ll arr[2003];

int main()
{
	ll t,n,mx,m,u,v,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll sum=0,od=0,ev=0,flag=0;
		fo(i,n)
		{
			cin>>x;
			sum+=x;
			if(x%2==0)
				ev++;
			else
				od++;
		}
		if(sum%2==1)
			flag=1;
		else if(ev>0 && od>0)
			flag=1;

		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}
}