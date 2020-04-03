#include<bits/stdc++.h>
using namespace std;
long long dp[100][100];
int r,c;
long long sol(int arr[100][100],int h,int w)
{	
	if(h==r)	
		return 0;
	if(dp[h][w]!=-1)
		return dp[h][w];
	long long ans=0;
	if(w>0)
		ans=max(ans,sol(arr,h+1,w-1));
	if(w<c-1)
		ans=max(ans,sol(arr,h+1,w+1));
		ans=max(ans,sol(arr,h+1,w));
	return dp[h][w]=ans+arr[h][w];
}
int main()
{	
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	scanf("%d",&t);
	int arr[100][100];
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		scanf("%d %d",&r,&c);
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				scanf("%d",&arr[i][j]);
		long long res=0;
		for(int i=0;i<c;i++)
			res=max(res,sol(arr,0,i));
		printf("%lld\n",res);
	}

}
