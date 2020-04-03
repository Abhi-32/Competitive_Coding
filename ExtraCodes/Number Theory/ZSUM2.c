#include<stdio.h>
long mod_power(long n,long k,long m)
{
	if(k==1)
		return n%m;
	long res=mod_power(n,k/2,m);
	if(k%2==0)
		return (res*res)%m;
	else
		return ((res*res)%m*(n%m))%m;
}
int main()
{
	long n,k,m=10000007;
	printf("hii");
	scanf("%ld %ld",&n,&k);
	while(n!=0 || k!=0)
	{
		printf("%ld\n",(mod_power(n,n,m)+2*mod_power(n-1,n-1,m)+mod_power(n,k,m)+2*mod_power(n-1,k,m))%m);
		scanf("%ld %ld",&n,&k);
	}
	return 0;
}


