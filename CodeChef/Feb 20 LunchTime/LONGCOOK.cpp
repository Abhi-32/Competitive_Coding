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
ll arr[401];
ll leap(ll y)
{
	if(y%400==0)
		return 1;
	if(y%100==0)
		return 0;
	if(y%4==0)
		return 1;
	return 0;
}
int main()
{
	ll t,n,mx,m,u,v,d=1,cnt=0;
	fo(i,30)
	{
		d=d%7;
		//printf("i=%lld d=%lld\n",i,d);
		if(leap(i) && d==5)
			arr[i]=1;
		
		else if(d==5 || d==6)
			arr[i]=1;
		
		if(leap(i))
			d+=2;
		else
			d+=1;
	}
	
	fo(i,400)
		if(arr[i])
			cnt++;
	cin>>t;
	while(t--)
	{
		ll m1,m2,y1,y2,ans=0,s,e,ind;
		cin>>m1>>y1>>m2>>y2;

		if(m1>2)
			y1++;
		if(m2<2)
			y2--;
		if(y1<=y2)
		{
			u=y2-y1+1;
			v=u/400;
			ans=ans+v*cnt;
			s=y1%400;
			e=y2%400;
			fo(i,400)
			{
				ind=(i+s)%400;
				ans+=arr[ind];
				if(ind==e)
					break;
			}
		}
		cout<<ans<<"\n";
	}	
}