#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int dp[101][101][101];
int ans;
int sol(int a,int b,int c,int ind,int n,int prev)
{
	if(ind==n)
		return 1;
	int mx=0;
	mx=sol(a--)
}
int main()
{
	ans=0;
	int a,b,c;
	cin>>a>>b>>c;
	memset(dp,-1,sizeof(dp));
	sol(a,b,c,0,a+b+c);
}
