#include<bits/stdc++.h>
using namespace std;
//Please don't consider N the test cases are wrong. You will get WA if you consider N.
int main()
{	
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t,n,k;
	scanf("%d",&t);
	int p[102],dp[102];
	while(t--)
	{
		scanf("%d %d",&n,&k);
		for(int i=1;i<=k;i++)
			scanf("%d",&p[i]);
			
		for(int i=1;i<=k;i++)
		{
			dp[i]=p[i];
			for(int j=1;j<i;j++)
			{	
				if(p[j]==-1 || dp[i-j]==-1)
					continue;
				if(dp[i]==-1)
					dp[i]=p[j]+dp[i-j];
				else
					dp[i]=min(dp[i],p[j]+dp[i-j]);
			}
		}
		printf("%d\n",dp[k]);
	}

}