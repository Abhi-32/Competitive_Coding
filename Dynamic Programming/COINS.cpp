#include<bits/stdc++.h>
using namespace std;
unordered_map <int,long int> dp;
long long sol(long long n)
{	
	if(n==0)	
		return 0;
	if(dp[n]!=0)
		return dp[n];
	return dp[n]=max(n,sol(n/2)+sol(n/3)+sol(n/4));
}
int main()
{	
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	long long x;
	    while(scanf("%lld",&x)==1) 
	    	printf("%lld\n",sol(x));
}
