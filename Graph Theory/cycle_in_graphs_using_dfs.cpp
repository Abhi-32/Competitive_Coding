//Undirected Graph
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mod = 1000000007;
const int m=1e9+7;
vector<int> adj[100000];
bool vis[100000];
int c=0;
int cyc(vector<int> adj[],int u,int par)
{
    vis[u]=1;
    for(auto v : adj[u])
    {
        if(!vis[v]){
            cyc(adj,v,u);
        }
        else if(v!=par){
            return 1;
        }
    }
    return 0;
}
bool isCyclic(vector<int> adj[], int V)
{
   memset(vis,0,sizeof(vis));
   for(int u=0;u<V;u++)
    if(!vis[u]){
        if(cyc(adj,u,-1))
            return 1;
    }
    return 0;
        
}
int main()
{
	int n,e,u,v;
	cin>>n>>e;
	while(e--)
	{
		cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
    int an=isCyclic(adj,n);
    printf("%d \n",an);
}
/*
5 4
0 1 2 3 3 4 4 2
*/