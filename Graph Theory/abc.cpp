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
string s[101],str="ALLIZZWELL";
void fun(int arr[])
{
	arr[3]=10;
	printf("arr2\n");
	for(int x:arr)
		printf("%d\n",x);
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int arr2[]=arr;
	fun(arr2);
	for(int x:arr)
		printf("%d\n",x);
}