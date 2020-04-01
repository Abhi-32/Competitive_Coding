#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{	int p,n,i,j;
	int ans;
	scanf("%d",&p);
	while(p--)
	{
		scanf("%d",&n);
		char ch[n][200];
		for(i=0;i<n;i++)
			scanf(" %[^\n]",ch[i]);
		long int a[26];
		for(i=0;i<26;i++)
			a[i]=0;
		ans=0;
		for(i=0;i<n;i++)
		{	
			for(j=0;j<strlen(ch[i]);j++)
			{	
				if((a[ch[i][j]-'a'])<(i+1)  && (a[ch[i][j]-'a'])>=i)
				a[ch[i][j]-'a']++;
			}
		}
		for(i=0;i<26;i++)
		{	
			if(a[i]==n)
				ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}	