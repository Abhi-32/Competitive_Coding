#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int r,i,c,j;
		int arr[100][100];
		scanf("%d %d",&r,&c);
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				scanf("%d",&arr[i][j]);
		int flag=1;
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
			{
				if((i==0 && j==0) || (i==0 && j==c-1) || (i==r-1 && j==0) || (i==r-1 && j==c-1)){
					if(arr[i][j]>=2){
						flag=0;
						break;
					}
				}
				else if(i==0 || i==r-1 || j==0 || j==c-1){
					if(arr[i][j]>=3){
						flag=0;
						break;
					}
				}
				else{
					if(arr[i][j]>=4){
						flag=0;
						break;
					}
				}
			}
		if(flag==1)
			printf("Stable\n");
		else
			printf("Unstable\n");
	}
}