#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mod = 1000000007;
const int m=1e9+7;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		int arr[10]={0};
		for (int i = 0; i < n; ++i)
		{
			cin>>s;
			for(int j=0;j<s.size();j++)
				if(s[j]=='1')
					arr[j]++;
		}
		int ans=0;
		for(int i=0;i<10;i++)
			if(arr[i]%2==1)
				ans++;
		cout<<ans<<"\n";
	}
}