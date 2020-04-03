#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mod = 1e9+7;
vector<int> g[10005];
int l[10000];
int sum[10000];
void dfs(int cur,int par)
{
	int cnt=0;
	for(int v: g[cur])
		if(v!=par)
		{
			cnt++;
			dfs(v,cur);
		}
	if(!cnt) l[cur]=1;
}
void dfs2(int cur,int par)
{
	int cnt=0;
	for(int v: g[cur])
		if(v!=par)
		{
			if(l[v]) cnt++;
			dfs2(v,cur);
		}
		sum[cur]=cnt;
}

int main()
{
	memset(l,0,sizeof(l));
	memset(sum,0,sizeof(sum));
	int n,u;
	cin>>n;
	for(int v=2;v<=n;v++)
	{
		cin>>u;
		g[u].pb(v);
		g[v].pb(u);
	}
	dfs(1,-1);
	dfs2(1,-1);
	
	int flag=1;
	for(int i=1;i<=n;i++)
		if(!l[i] && sum[i]<3)
		{
			flag=0;
			break;
		}
	if(flag)	cout<<"Yes"<<"\n";
	else		cout<<"No"<<"\n";
}