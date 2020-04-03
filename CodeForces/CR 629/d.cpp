#include<bits/stdc++.h>
using namespace std;
#define boost() ios_base::sync_with_stdio(false);cin.tie(0)
#define pb push_back
#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define mem(x,y) memset(x, y, sizeof(x))
#define F first
#define S second
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vll;
const int mod = 1e9+7;
const int N=2e5+3;
//vector<ll> g[N];
ll arr[N];
int main()
{
	boost();
	ll t,n,mx=INT_MIN,mn=INT_MAX,u,v,a,b,d;
	cin>>t;
	while(t--)
	{
		cin>>n;
		fo(i,n)
			cin>>arr[i];

		ll flag=1,x=arr[0];
		fo(i,n)
			if(x!=arr[i])
				flag=0;

		if(flag)
		{
			cout<<"1\n";
			fo(i,n)
				cout<<"1 ";
		}
		else if(n%2==0)
		{
			cout<<"2\n";
				fo(i,n)	
					cout<<i%2+1<<" ";
		}
		else
		{
			ll fg=0;
			fo(i,n)
			{
				if(arr[i]==arr[(i+1)%n])
				{
					fg=1;
					a=min(i,(i+1)%n);
					b=max(i,(i+1)%n);
					break;
				}
			}
			vector<ll> cl(n,0);

			if(fg)
			{
				bool prev=0;
				fo(i,n)
				{
					if(i==b)
						continue;
					else
					{
						cl[i]=int(prev+1);
						prev=!prev;
					}
				}
				cl[b]=cl[a];

				cout<<"2\n";
				fo(i,n)
					cout<<cl[i]<<" ";
			}
			else
			{
				cout<<"3\n";
				fo(i,n-1)
					cout<<i%2+1<<" ";
				cout<<"3 ";
			}
		}
		cout<<"\n";

	}
}