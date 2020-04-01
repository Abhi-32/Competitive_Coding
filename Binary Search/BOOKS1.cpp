#include<bits/stdc++.h>
using namespace std;
int main()
{	
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	long long t,m,n,k,l,h,ans,mid,val,x,w,page;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		vector <long long> v;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		l=*max_element(v.begin(),v.end());
		h=accumulate(v.begin(),v.end(),0);
		while(l<=h)
		{
			mid=l+(h-l)/2;
			w=1;  page=0;
			for(int i=0;i<n;i++)
			{
				if((page +v[i])<=mid)
				{
					page+=v[i];
				}
				else
				{
					w++;
					page=v[i];
				}
			}
			if(w<=k)
			{
				ans=mid;
				h=mid-1;
			}
			else
				l=mid+1;

		}

		page=0;
		int arr[1008];
		int l=n+k-1,cnt=l-1,cc=1;
		for(int i=n-1;i>=0;i--)
		{		
				if(page+v[i]>ans || i==k-cc-1) // if no of '/' left equal to the no of elements, then between every lement there will be '/'
			{
				arr[cnt]=-1;
				cnt--;
				page=0;
				cc++;
			}
			page+=v[i];
			arr[cnt]=v[i];
			cnt--;
		}
		for(int i=0;i<l;i++)
		{
			if(arr[i]==-1)
				cout<<'/'<<" ";
			else
				cout<<arr[i]<<" ";
		}
		cout<<endl;
		
	}
}