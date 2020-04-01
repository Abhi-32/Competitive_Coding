#include<stdio.h>
#include<stdlib.h>
int main()
{	int p,n,i;
	scanf("%d",&p);
	while(p--)
	{
		int n,i;
		scanf("%d",&n);
		long int arr[n];
		long long int ans=0;
		for(i=0;i<n;i++)
		{
			scanf("%ld",&arr[i]);
			if(arr[i]>1)
			{
				ans+=arr[i];
				ans-=1;
			}
		}
		ans+=1;
		printf("%lld\n",ans);
	}
}	