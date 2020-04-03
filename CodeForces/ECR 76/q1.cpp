#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mod = 1000000007;
const int m=1e9+7;
int main()
{
	int t,n,x,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n>>x>>a>>b;
		int l,r,k;
		if(a>b){
			k=b;
			b=a;
			a=k;
		}
		l=a-1; r=n-b;
		k=min(l,x);
		a-=k;
		x-=k;
		k=min(r,x);
		b+=k;
		cout<<abs(b-a)<<"\n";
	}
}