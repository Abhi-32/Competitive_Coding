#include<bits/stdc++.h>
using namespace std;
int main()
{	
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	long long t,n,c,l,h,ans,mid,val,x,prev,cow;
	cin>>t;
	while(t--)
	{
		cin>>n>>c;
		vector <long long> v;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		l=1;
		h=*max_element(v.begin(),v.end());
		sort(v.begin(),v.end());
		while(l<=h)
		{
			mid=l+(h-l)/2;
			cow=1;
			prev=v[0];
			for(int i=1;i<n;i++)
				if((v[i]-prev)>=mid)
				{
					prev=v[i];
					cow++;
				}
			if(cow>=c)
			{
				ans=mid;
				l=mid+1;
			}
			else
				h=mid-1;

		}
		cout<<ans<<endl;
	}
}