#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
	ll t,n,q,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		vector<ll> v;
		for(ll i=0;i<n;i++)
		{
			cin>>x;
			v.pb(x);
		}
		for(ll i=0;i<q;i++)
		{
			cin>>x;
			ll j=0,cnt=0;
			while(j<n)
			{
				if(x>v[j])
				{
					cnt++;
					x=2*(x-v[j]);
				}
				j++;
			}
			cout<<cnt<<endl;
		}
	}
}