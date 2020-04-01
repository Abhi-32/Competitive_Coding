#include<bits/stdc++.h>
using namespace std;
	map<int ,int> pos;
bool f( pair<int,int> i1, pair<int,int> i2)
{
	if(i1.second!=i2.second)
		return i1.second>i2.second;
	if(i1.second==i2.second)
		return pos[i1.first]<pos[i2.first];
	return false;
}
int main()
{	
	map<int ,int> m;
	int n,c,k,ps=1;
	int arr[1001];
	scanf("%d %d",&n,&c);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&c);
		m[c]++;
		arr[i]=c;
		if(pos[c]==0)
			pos[c]=ps++;
	}

	vector <pair<int,int> > v;

	auto p=m.begin();
	while(p!=m.end())
	{
		v.push_back({p->first,p->second});
		p++;
	}

	sort(v.begin(),v.end(),f);
	auto it = v.begin();
	while(it!=v.end())
	{
		auto p =*it;
		int a=p.first;
		int b=p.second;
		for(int j=0;j<b;j++)
			cout<<a<<" ";
		it++;
	}
}