#include<stdio.h>
#include<stdlib.h>
int main()
{
	int prime[100001]={0};

	prime[0]=1;
	prime[1]=1;
	int i,j,n=100000,l,r;
	for(i=2;i*i<=n;i++)
		if(prime[i]==0)
			for(j=i*i;j<=n;j+=i)
				prime[j]=1;
			int c[100001]={0};
	for(i=2;i<=n;i++)
		if(prime[i]==0)
		{
			c[i]=c[i-1];
			c[i]++;
		}
		else
			c[i]=c[i-1];

	printf("Enter the value of l and r\n");
	scanf("%d %d",&l,&r);
	int ans = c[r]-c[l-1];
	printf("%d\n",ans);
}