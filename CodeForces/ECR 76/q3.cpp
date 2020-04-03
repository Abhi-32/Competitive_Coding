#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mod = 1000000007;
const int m=1e9+7;
int arr[200001];
int main()
{
	int t,n,x;
	cin>>t;
	while(t--)
	{
		int mn=INT_MAX;
		map<int,int> m;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			if(m[x])
			{
				mn=min(mn,i-m[x]+1);
			}
			//printf("i=%d  ==%d\n",i,m[x]);
			m[x]=i;
		}
		if(mn==INT_MAX)
			mn=-1;
		cout<<mn<<"\n";
	}
}