#include<stdio.h>
#include<stdlib.h>
bool isprime[1000050];
int arr[1001][1001];
int i,j,d,p,q;
void sieve(){
	for(int i=1;i<=1000000;i++){
		isprime[i]=1;
	}
	isprime[0]=0;
	isprime[1]=0;
	for(int i=2;i*i<=1000000;i++){
		if(isprime[i]){
			for(int j=i*i;j<=1000000;j+=i){
				isprime[j]=0;
			}
		}
	}
}
void calcmatrix(int n)
{
	d=n-1;
	for(j=0;j<d;j++)
	{
		arr[j][0]=j+1;
	}
	for(i=0;i<d/2;i++)
	{
		for(j=1;j<d;j++)
		{
			arr[i][j]=((arr[i][j-1]%n)*((i+1)%n))%n;
		}
	}
	p=d/2;  q=d/2;

	for(i=d/2;i<d;i++)
	{
		p=p-1;
		q=q-1;
		for(j=0;j<d;j++)
		{
			if((j+1)%2!=0)
			{
				arr[i][j]=n-arr[p][j];
			}
			else
			{
				arr[i][j]=arr[q][j];
			}
		}
	}
	for(i=0;i<d;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");	
	}
	printf("\n\n\n");
}

void calcmatrix2(int n)
{
	d=n-1;
	for(j=0;j<d;j++)
	{
		arr[j][0]=j+1;
	}
	for(i=0;i<d/2;i++)
	{
		for(j=1;j<d;j++)
		{
			arr[i][j]=((arr[i][j-1]%n)*((i+1)%n))%n;
		}
	}
	p=d/2;  q=d/2;

	for(i=d/2;i<d;i++)
	{
		p=p-1;
		q=q-1;
		for(j=0;j<d;j++)
		{
			if((j+1)%2!=0)
			{
				arr[i][j]=n-arr[p][j];
			}
			else
			{
				arr[i][j]=arr[q][j];
			}
		}
	}
	for(i=0;i<d;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");	
	}
	printf("\n\n\n");
}
int main()
{
	sieve();
	int n;
	while(1){
	printf("Enter a prime number or Enter 0 to exit\n");
	scanf("%d",&n);
	if(n==0) break;
	if(isprime[n]==0)
	{
		printf("%d is not a prime no\n Enter a prime number\n",n);
		continue;
	}
	else
		calcmatrix(n);
    }
	return 0;
}
