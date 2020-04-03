#include<bits/stdc++.h>
using namespace std;
long long dp[10001];
long long sol(vector<long long> &v,int ind)
{	
	long long n=v.size();
	if(ind>=n)	
		return 0;

	if(dp[ind]!=-1)
		return dp[ind];
	return dp[ind]=max(v[ind]+sol(v,ind+2),sol(v,ind+1));
}
int main()
{	
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t,n;
	scanf("%d",&t);
	long long x;
	vector<long long> v;
	for(int i=1;i<=t;i++)
	{
		memset(dp,-1,sizeof(dp));
		v.clear();
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%lld",&x);
			v.push_back(x);
		}
		printf("Case %d: %lld\n",i,sol(v,0));
	}

}
