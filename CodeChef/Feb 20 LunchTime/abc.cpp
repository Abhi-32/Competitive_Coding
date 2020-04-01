#include<bits/stdc++.h>
using namespace std;
#define boost() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define mem(x,y) memset(x, y, sizeof(x))
#define F first
#define S second
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
const int mod = 1e9+7;
const int N=1e5+3;
ll g[30][30];
ll vis[30];
stack<ll> s;
void dfs(ll i)
{
	vis[i]=1;
	for(int j=0;j<26;j++)
		if(g[i][j] && i!=j && vis[j]==0)
		{
			printf("%c  %c\n",(char)i,(char)j);
			dfs(j);
		}
		s.push(i);
	}
	ll dp[N];
	int main()
	{
		vl arr={11,22,7,7,7,7,7,7,7,22,13};
		int n=arr.size();  memset(dp,-1,sizeof(dp));
		for(int i=0;i<n;i++)
			dp[i]=i;
		for(int i=1;i<n;i++)
			for(int j=0;j<i;j++)
			{
				if(i==n-2)
					printf("%lld  %lld\n",arr[i],arr[j]);
				if(arr[i]==arr[j]){
					dp[i]=min(dp[i],1+dp[j]);
					dp[i]=min(dp[i],2+dp[j+1]);
					if(j!=0)
						dp[i]=min(dp[i],2+dp[j-1]);
				}
			}
			fo(i,n)
			cout<<dp[i]<<"  ";
			printf("\n");
			return dp[n-1];
		}