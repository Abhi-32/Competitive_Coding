#include<bits/stdc++.h>
using namespace std;
int main()
{	
	double pi = acos(-1.0);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	long long t,n,f,x,w;
	double l,h,mid,area,c,ans,min,max;
	cin>>t;
	while(t--)
	{
		cin>>n>>f;
		vector <double> v;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x*x*pi);
		}
		max=*max_element(v.begin(),v.end());
		min=*min_element(v.begin(),v.end());
		l=0;
		h=max*pi*pi;
		sort(v.begin(),v.end());
		while((l-h)>=0.00001 || (h-l)>=0.00001)
		{	
			w=0;
			mid=l+(h-l)/2;
			for(int i=0;i<n;i++)
			{
				c=v[i]/mid;
				w+=(int)c;
			}
			if(w>=(f+1))
			{
				ans=mid;
				l=mid;
			}
			else
				h=mid;

		}
		printf("%0.4lf\n",ans);
	}
}