#include<stdio.h>
#include<limits.h>
#include<string.h>
int main()
{
	int t,i,j,k;
	char ch[1000];
	scanf("%d",&t);
	while(t--)
	{
		int n,m,d;
		scanf("%d",&n);
		int freq[32]={0};
		for(i=0;i<n;i++)
		{
			d=0;
			scanf("%s",ch);
			int l=strlen(ch);
			for(j=0;j<l;j++)
			{	
				if(ch[j]=='a')
					d=d|1;
				else if(ch[j]=='e')
					d=d|2;
				else if(ch[j]=='i')
					d=d|4;
				else if(ch[j]=='o')
					d=d|8;
				else
					d=d|16;
				if(d==31)
					break;
			}
			freq[d]++;
		}
		long int c,ans;
		ans=0;
		for(i=1;i<32;i++)
		{	
			for(j=i+1;j<32;j++)
			{
				if((i|j)==31){
					ans+=freq[i]*freq[j];
			}
			}
		}
		c=freq[31];
		ans+=(c*(c-1))/2;
		printf("%ld\n",ans);
	}
	return 0;
}