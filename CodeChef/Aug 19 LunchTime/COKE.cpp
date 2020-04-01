#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
	
	ll n,m,k,l,r,t,c,p;
	cin>>t;
	while(t--)
	{
		ll ans=INT_MAX,val=0,d,d1,temp;
		cin>>n>>m>>k>>l>>r;
		for(int i=0;i<n;i++)
		{
			cin>>c>>p;
			d=abs(c-k);
			if(m>=d)
			{
				temp=k;
			}
			else
			{
				if(c<k)
					temp=c+m;
				else
					temp=c-m;
			}
			if(temp>=l && temp<=r)
				if(p<ans)
					ans=p;
		}
		if(ans==INT_MAX)
			cout<<"-1"<<endl;
		else
			cout<<ans<<endl;
	}
}