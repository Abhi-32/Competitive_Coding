#include<bits/stdc++.h>
using namespace std;
int main()
{
		ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
		long long t,n,s,l,h,ans,item,mid,val,x,sum,k;
		cin>>n>>s;
		vector <long long> v,tmp;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		l=0;
		h=n;
		while(l<=h)
		{
			mid=l+(h-l)/2;
			sum=0;
			item=0;
			tmp.clear();
			tmp=v;
			for(int i=0;i<n;i++)
			{	
				tmp[i]=tmp[i]+(mid*(i+1));
			}
			sort(tmp.begin(),tmp.end());
			for(int i=0;i<mid;i++)
			{	
				sum+=tmp[i];
			}
			if(sum<=s)
			{
				l=mid+1;
				ans=sum;
				k=mid;
			}
			else
				h=mid-1;
		}
		cout<<k<<" "<<ans;
}