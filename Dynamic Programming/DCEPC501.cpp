#include<bits/stdc++.h>
using namespace std;
long long dp[100001];
long long sol(vector<long long> &v,int ind)
{	
	long long n=v.size();
	if(ind>=n)	
		return 0;

	if(dp[ind]!=-1)
		return dp[ind];
	long long ans=0;
	if(ind<n)
		ans=max(ans,v[ind]+sol(v,ind+2));
	if(ind<n-1)
		ans=max(ans,v[ind]+v[ind+1]+sol(v,ind+4));
	if(ind<n-2)
		ans=max(ans,v[ind]+v[ind+1]+v[ind+2]+sol(v,ind+6));
	return dp[ind]=ans;
}
int main()
{	
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t,n;
	scanf("%d",&t);
	long long x;
	vector<long long> v;
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		v.clear();
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%lld",&x);
			v.push_back(x);
		}
		printf("%lld\n",sol(v,0));
	}

}
