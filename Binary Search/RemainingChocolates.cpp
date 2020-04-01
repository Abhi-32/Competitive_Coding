#include<bits/stdc++.h>
using namespace std;
int main()
{	
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	long long t,n,m,l,h,ans=0,mid,val;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		l=0;
		h=2e9;
		while(l<=h)
		{
			mid=l+(h-l)/2;
			val=(mid*(mid+1))/2;
			if(val<=m)
			{
				l=mid+1;
				ans=val;
			}
			else
				h=mid-1;

		}
		cout<<(m-ans)<<endl;
	}
}