#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main()
{	int t;
	scanf("%d",&t);
	while(t--){
	long long int n,a,b,k,appy,chef,common,ans;
	scanf("%lld %lld %lld %lld",&n,&a,&b,&k);
	appy=n/a;
	chef=n/b;
	common=(a*b)/gcd(a,b);
	common=n/common;
	ans=appy+chef-2*common;
	if(ans>=k)
		printf("Win\n");
	else
		printf("Lose\n");
}
	return 0;
}