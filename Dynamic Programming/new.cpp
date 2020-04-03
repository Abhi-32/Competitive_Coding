#include<bits/stdc++.h>

using namespace std;

unordered_map<int, long long> dp;

long long f(long long n)
{   
    if(n==0)    
        return 0;
    if(dp[n]!=0)
        return dp[n];
    return dp[n]=max(n,f(n/2)+f(n/3)+f(n/4));
}
int main(){    
    int n;
        
    while(scanf("%d",&n)==1) printf("%lld\n",f(n));
    
    return 0;
}