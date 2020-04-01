#include<bits/stdc++.h>
using namespace std;
int main()
{
		ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
		long long t,n,m,l,h,ans,mid,val,x,sum;
		cin>>n>>m;
		vector <long long> v;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		l=0;
		h=*max_element(v.begin(),v.end());
		while(l<=h)
		{
			mid=l+(h-l)/2;
			sum=0;
			auto it=upper_bound(v.begin(),v.end(),mid);
			while(it!=v.end()){
				sum+=*it;
				sum-=mid;
				it++;

			}
			if(sum>=m)
			{
				ans=mid;
				l=mid+1;
			}
			else
				h=mid-1;			
		}
		cout<<ans;
	
}