#include<bits/stdc++.h>
using namespace std;
#define boost() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define mem(x,y) memset(x, y, sizeof(x))
#define F first
#define S second
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pll;
typedef vector<int>     vi;
typedef vector<ll>      vl;
const int mod = 1e9+7;
const int N=1e5+3;
const int cn=1e9;
vector<pll> g[N];
ll dis[N];
ll vis[N];
ll par[N];
map<pll,ll> mp,mp2;
#define INF 9999999999999999

void dij(vector<pair<ll,ll>> adj[], ll oi, ll s,vector<ll> &dis){
    /*
    priority_queue< pair<ll,ll> , vector<pair<ll,ll>> , greater<pair<ll,ll>> > pq;
    //vector<ll> dist(v,INF);

    pq.push(make_pair(0,src));
    dist[src] = 0;

    vector<bool>vis(v+1,false);

    while(!pq.empty()){
        ll u = pq.top().second;
        vis[u] = true;
        //cout<<"u is "<<u<<endl;
        pq.pop();
        //cout<<"going to edges"<<endl;
        for(auto x: adj[u]){
            ll v = x.first;
            ll weight = x.second;
            //cout<<v<<endl;
            if(!vis[v] && dist[v]> dist[u] + weight){
                dist[v] = dist[u] + weight;
                //cout<<"dist of v is "<<dist[v]<<endl;
                pq.push(make_pair(dist[v],v));
            }
        }
    }
    */
    
    ll n,m,u,v,x,w,we;
    priority_queue<pll,vector<pll>,greater<pll>> pq;
    fo(i,N)
        dis[i]=1000000000,vis[i]=0;
    dis[s]=0;
    pq.push({0,s});
    while(!pq.empty())
    {
        pll p=pq.top();
        pq.pop();
        u=p.S; we=p.F;
        if(vis[u])  continue;
        vis[u]=1;
        for(auto it:g[u])
        {
            v=it.F; w=it.S;
            if(dis[v]>dis[u]+w)
            {
                dis[v]=dis[u]+w;
                pq.push({dis[v],v});
                par[v]=u;
            }
        }
    }

}

int main()
{
    boost();
    ll n,m,u,v,t,w,we,s,d,x;
    cin>>t;
    while(t--)
    {
        
    cin>>n>>m;
    cin>>s>>d>>x;
    while(m--)
    {
        cin>>u>>v>>w;
        g[u].pb({v,w});
        g[v].pb({u,w});
    }
    ll ans=LLONG_MAX;
        vector<ll> sDist(n+1,INF);
        vector<ll> vDist(n+1,INF);
        vector<ll> tDist(n+1,INF);
    dij(g,n,s,sDist);
    dij(g,n,x,vDist);
    dij(g,n,d,tDist);
    for ( int i = 1; i <= n; ++i ) {
      ans = min(ans, sDist[i] + vDist[i] + tDist[i]);
    }
    cout<<ans<<"\n";
    fo(i,n+1)
        g[i].clear();
    }
}