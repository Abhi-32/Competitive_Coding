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
const int N=1e6+3;
vector<ll> g[N];
ll arr[N];
int main()
{
	boost();
	ll n,u,x,q,k,j=0;
	cin>>q>>x;
	unordered_map<ll,ll> m;
	mem(arr,-1);
	while(q--)
	{
		cin>>n;
		k=n%x;
		if(arr[k]==-1)
			arr[k]=k;
		else
			arr[k]+=x;
		m[arr[k]]=1;
		while(m[j])
			j++;
		cout<<j<<"\n";
	}
	
}