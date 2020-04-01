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
vector<ll> g[N];
ll arr[4][4];
ll brr[24][4];
ll a[]={0,1,2,3};
void findPermutations() 
{
    sort(a, a + 4);
    ll i=0;
    do { 
    	for(ll j=0;j<4;j++)
    		brr[i][j]=a[j];
    	i++;
    } while (next_permutation(a, a + 4)); 
}

int main()
{
	ll t,n,mx,m,u,v,x;
	findPermutations();
	cin>>t;
	ll res=0;
	while(t--)
	{	
		mem(arr,0);
		char c;
		cin>>n;
		fo(i,n)
		{
			cin>>c>>x;
			x=x/3-1;
			arr[c-'A'][x]++;
		}
		mx=INT_MIN;
		ll val,d;

		for(ll k=0;k<24;k++)
		{
			vector<ll> ans;
			for(ll i=0;i<4;i++)
			{
				ans.pb(arr[i][brr[k][i]]);
			}
			sort(ans.begin(),ans.end(),greater<ll>());
			ll cnt=0;
			d=100; val=0;
			for(ll it:ans)
			{
				val=val+d*it;
				d-=25;
				if(it==0)
					cnt++;
			}
			val=val-(cnt*100);
			mx=max(mx,val);
		}
		res+=mx;
		cout<<mx<<"\n";
	}
	cout<<res<<"\n";
}