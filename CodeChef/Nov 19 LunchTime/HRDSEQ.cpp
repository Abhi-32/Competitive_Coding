#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mod = 1000000007;
const int m=1e9+7;

int main()
{

	int arr[130];
	vector<int> v(100000,-1);
	memset(arr,-1,sizeof(arr));
	arr[0]=0;
	arr[1]=0;
	int n=128;
	for(int i=2;i<n;i++)
	{
		v[arr[i-2]]=i-2;
		int l=arr[i-1];
		if(v[l]!=-1)
		{
			int k=v[l];
			arr[i]=(i-1)-k;
		}
		else
			arr[i]=0;
	}

	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int x=arr[n-1];
		int cnt=0;
		for(int i=0;i<n;i++)
			if(arr[i]==x)
				cnt++;
		cout<<cnt<<"\n";	
	}
}