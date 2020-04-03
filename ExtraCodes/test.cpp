#include<bits/stdc++.h>
using namespace std;
#define boost() ios_base::sync_with_stdio(false);cin.tie(0)
#define pb push_back
#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define mem(x,y) memset(x, y, sizeof(x))
#define F first
#define S second
typedef pair<int, int>    pii;
typedef pair<ll, ll>    pll;
typedef vector<int>        vi;
typedef vector<ll>        vll;
const int mod = 1e9+7;
const int N=1e2+3;
//vector<ll> g[N];
ll dp[N][N],n,m;
string s1,s2;

ll sol(ll i,ll j)
{
    if(i==m || j==n)
        return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];

    if(s1[i]==s2[j])
        return dp[i][j]=1+sol(i+1,j+1);

    return dp[i][j]=max(sol(i+1,j),sol(i,j+1));
}
int main()
{
    ll t,mx=INT_MIN,mn=INT_MAX,u,v,a,b,d;
    cin>>t;
    while(t--)
    {
        mem(dp,-1);
        cin>>s1>>s2;        
        m=s1.size();
        n=s2.size();
        cout<<m+n-sol(0,0)<<"\n";
    }
}