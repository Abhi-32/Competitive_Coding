#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mod = 1000000007;
const int m=1e9+7;
vector<int> g[100000];
int a[1000];
int sum[10000];


void dfs(int u,int par)
{
	sum[u]=a[u];
	for(int v : g[u])
		if(v!=par)
		{
			dfs(v,u);
			sum[u]+=sum[v];
		}
	
}
int main()
{
	int n,e,u,v;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<n;i++)
	{
		cin>>u>>v;
		g[u].pb(v);
		g[v].pb(u);
	}
	dfs(1,-1);

	for(int i=1;i<=n;i++)
		printf("node=%d  sum=%d\n",a[i],sum[i]);
}
/*
 stdin copy
6
1 8 3 2 0 4
1 2
2 4
2 5
1 3
3 6
6
1
2
3
4
5
6
 stdout copy
18
10
7
2
0
4
*/
