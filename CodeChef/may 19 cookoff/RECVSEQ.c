#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,i;
		scanf("%lld",&n);
		long long int arr[n];
		for(i=0;i<n;i++)
			scanf("%lld",&arr[i]);
		long long int d,d1,d2,ans;
		d1=(arr[n-1]-arr[0])/(n-1);
		if(arr[1]==arr[0]+d1 || arr[2]==(arr[0]+2*d1))
			d=d1;
		else{
			d=arr[2]-arr[1];
			arr[0]=arr[1]-d;
			arr[n-1]=arr[n-2]+d;
		}
		ans=arr[0];
		for(i=0;i<n;i++){
			printf("%lld ",ans);
			ans+=d;
		}
		printf("\n");

	}
}