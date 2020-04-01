#include<stdio.h>
#include<stdlib.h>
int main()
{	int p,n,i;
	scanf("%d",&p);
	while(p--)
	{
		int ans=-1,max=-1;
		scanf("%d",&n);

		int a[n],d[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			scanf("%d",&d[i]);
		
		if(d[0]>(a[n-1]+a[1]))
			ans=d[0];
		if(max>ans)
			ans=max;
		for(i=1;i<n;i++)
		{
			if(d[i]>(a[i-1]+a[(i+1)%n]))
				ans=d[i];
			if(ans>max)
				max=ans;
		}
		printf("%d\n",max);
	}
}