#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x;
	vector<int> bob;
	map <int,int> map;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		bob.push_back(x);
		scanf("%d",&m);
		for(int j=0;j<m;j++)
		{
			scanf("%d",&x);
			map[x]=1;
		}
	}

	for(int i=0;i<bob.size();i++)
		map.erase(bob[i]);
	cout<<map.size()<<endl;
	
}