#include<stdio.h>
#include<limits.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int arr[n],po=0,ne=0;
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
				if(arr[i]>0)
					po++;
				else
					ne++;
		}
		int max,min;
		if(po>ne)
		{
			max=po;
			min=ne;
			if(min==0)
				min=po;
		}
		else
		{
			max=ne;
			min=po;
			if(min==0)
				min=ne;
		}
		printf("%d %d\n",max,min);
	}
}