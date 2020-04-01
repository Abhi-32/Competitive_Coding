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
		int n;
		cin>>n;
		int mx=0;
		int g1,f1;
		vector<int> g,f;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&g1);
			g.push_back(g1);
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d",&g1);
			f.push_back(g1);
		}
		for(int i=0;i<n;i++)
		{	
			if((20*g[i]-10*f[i])>mx)
				mx=(20*g[i]-10*f[i]);
		}
		cout<<mx<<endl;
	}
}