#include<stdio.h>
int main()
{	
	int prime[1000001]={0};

	prime[0]=1;
	prime[1]=1;
	int i,j,n=1000000,l,r;
	for(i=2;i*i<=n;i++)
		if(prime[i]==0)
			for(j=i*i;j<=n;j+=i)
				prime[j]=1;

	int no[100000]={0},cnt=0;
	for(i=0;i<=1000000;i++)
		if(prime[i]==0)
		{
			no[cnt]=i;
			cnt++;
		}

	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int l1,r1,g1,k=0,m;
		scanf("%lld %lld %lld",&l1,&r1,&g1);
		long long int ans=0,val=0;
		cnt=0;
		while(no[k]!=0 && val<=r1)
		{
			val=g1*no[cnt];	
			if(val>=l1 && val<=r1){
				ans++;
			}
			cnt++;
		}
		printf("%lld\n",ans);
	}
}