#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t,n,m,x,key,f1,f2;;
	cin>>t;
	while(t--)
	{	
		cin>>n>>m;
		vector <int> v;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		long long ans=0;
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++)
		{
			x=m-v[i];
			if(x==v[i])
				continue;
			if(binary_search(v.begin()+i,v.end(),x))
			{
				ans++;
			}
		}
		printf("%lld\n",ans);
		v.clear();

	}
}