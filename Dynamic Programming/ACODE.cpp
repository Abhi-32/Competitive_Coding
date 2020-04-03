#include<bits/stdc++.h>
using namespace std;
long long dp[5001];
long long sol(string s,int i)
{	
	if(i==s.size())
		return 1;
	if(s[i]=='0')
			return 0;
	if(dp[i]!=-1)
		return dp[i];
	if(i<s.size()-1)
		if(s[i]=='1' || (s[i]=='2' && s[i+1]<'7'))
			return dp[i]=sol(s,i+1)+sol(s,i+2);
	return dp[i]=sol(s,i+1);

}
int main()
{	
	int t,n;
	char s[10001];
	while(scanf("%s",s)==1)
	{
		memset(dp,-1,sizeof(dp));
		if(s[0]!='0')
		printf("%lld\n",sol(s,0));
	}

}