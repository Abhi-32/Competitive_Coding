#include<stdio.h>
int binary(int n)
{
	int bin=0,j=1;
	while(n>0)
	{
		int r=n%2;
		bin=bin+r*j;
		n/=2;
		j*=10;
	}
	return bin;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a=n<<1;
	int b=n>>1;
	printf("%d %d\n%d\n%d\n%d\n",a,b,binary(n),binary(a),binary(b));
}