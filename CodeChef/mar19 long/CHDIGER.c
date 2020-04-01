#include<stdio.h>
#include<limits.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,m,ans;
		int arr[19],d,size=0,i,min,index=0,j;
		scanf("%lld %d",&n,&d);
		m=n;
		while(m)
		{
			arr[size]=m%10;
			m/=10;
			size++;
		}
		for(i=0,j=size-1;i<j;i++,j--)
		{
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		int res[size];
		i=0;
		for(j=0;j<size;j++)
			res[j]=0;
		while(i!=size)
		{
				min=i;
				for(j=i;j<size;j++)
					if(arr[j]<arr[min])
						min=j;
				if(arr[min]>d)
					break;
				else
				{
						res[index]=arr[min];
						i=min;
						index++;				
				}
				i++;
		}
		for(j=0;j<size;j++)
			if(res[j]==0)
				res[j]=d;
		for(j=0;j<size;j++)
			printf("%d",res[j]);
		printf("\n");

	}
}