#include<bits/stdc++.h>
using namespace std;
long long dp[6101][6101];
long long sol(string &s,int l,int h)
{
	if(l>=h)
		return 0;
	if(dp[l][h]!=-1)
		return dp[l][h];
	if(s[l]==s[h])
		return dp[l][h]=sol(s,l+1,h-1);
	else
		return dp[l][h]=1+min(sol(s,l+1,h),sol(s,l,h-1));

}
int main()
{	
	int t;
	string s;
    scanf("%d", &t);
    while(t--){
        memset(dp , -1 , sizeof dp);
        cin>>s;
        printf("%lld\n",sol(s,0 ,s.size()-1));
    }
    return 0;
}
