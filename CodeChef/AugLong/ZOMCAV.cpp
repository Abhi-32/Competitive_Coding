#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int c[100001],h[100001],rad[100002]={0};
		for(int i=0;i<n;i++)
			scanf("%d",&c[i]);

		for(int i=0;i<n;i++)
			scanf("%d",&h[i]);
		int l,r;
		for(int i=0;i<n;i++)
		{
			l=i-c[i];
			r=i+c[i];
			if(l<0)
				l=0;
			if(r>n-1)
				r=n-1;
			rad[l]++;
			rad[r+1]--;
		}
		for(int i=1;i<n;i++)
		    rad[i]+=rad[i-1];
		sort(h,h+n);
		sort(rad,rad+n);
		int flag=1;
		for(int i=0;i<n;i++)
			if(rad[i]!=h[i])
			{
				flag=0;
				break;
			}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");

	}
}