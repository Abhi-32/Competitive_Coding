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
const int N=1e3+3;
vector<ll> g[N];
ll arr[N];
int main()
{
	ll t,n,mx,m,u,p,d,d1,d2,a1,a2;
	cin>>t;
	while(t--)
	{
		ll f1=0,f2=0;
		cin>>n>>p;
		fo(i,n)
			cin>>arr[i];

		sort(arr,arr+n);
		fo(i,n)
			if(p%arr[i])
			{	
				f1=1;
				d=i;
				break;
			}
		if(f1==0){
		for(ll i=0;i<n;i++)
		{	
			for(ll j=i+1;j<n;j++)
			{
				if(arr[j]%arr[i])
				{
					d1=i;
					d2=j;
					f2=1;
					break;
				}
			}
			if(f2)	break;
		}}
		if(f1)
		{
			a1=p/arr[d]+1;
			cout<<"YES ";
			fo(i,n)
				if(i==d)
					cout<<a1<<" ";
				else
					cout<<"0"<<" ";
		}
		else if(f2)
		{
			a2=p/arr[d2];
			a2--;
			p=p-a2*arr[d2];
			a1=p/arr[d1];
			a1++;
			cout<<"YES ";
			fo(i,n)
				if(i==d1)
					cout<<a1<<" ";
				else if(i==d2)
					cout<<a2<<" ";
				else
					cout<<"0"<<" ";
		}
		else
			cout<<"NO";
		cout<<"\n";
	}
}