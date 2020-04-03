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

int main()
{
	multiset<int> m;
	m.insert(12);
	m.insert(20);
	m.insert(30);
	m.insert(40);
	m.insert(10);
	m.insert(5);
	m.insert(200);
	m.insert(100);

	auto it=m.begin();
	cout<<*it<<"\n";

	it=it+3;
	cout<<*it<<"\n";

}