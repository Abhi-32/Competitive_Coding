#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		n=n/k;
		if(n%k==0)
			printf("NO\n");
		else
			printf("YES\n");
	}
}