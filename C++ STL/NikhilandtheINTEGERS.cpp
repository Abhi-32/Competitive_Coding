#include<bits/stdc++.h>
using namespace std;
#define Boost() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool f(pair<int,int> i1,pair<int,int> i2)
{
	if(i1.first<i2.first)
		return true;
	if(i1.first==i2.first)
		return i1.second<i2.second;
	
		return false;
}
int main()
{
	Boost()
	unordered_map <int,int> m;
	int n,vote;
	scanf("%d",&n);	
	for(int i=0;i<n;i++){
		scanf("%d",&vote);
		m[vote]++;
	}
	vector <pair<int,int> > s;
	auto it = m.begin();;
	while(it!=m.end())
	{ 	
		s.push_back({it->second,it->first});
		cout<<it->second<<"   "<<it->first<<endl;
		it++;
	}
	sort(s.begin(),s.end(),f);
	for(auto p1 : s){
		cout<<p1.first<<"   "<<p1.second<<endl;
	}
	int arr[200001],cnt=0;
	auto it2 = s.rbegin();//reverse begin
	while(it2!=s.rend())//reverse end
	{
		auto p = *it2;
		arr[cnt]=p.second;
		cnt++;
		it2++;
	}
	for(int i=100000;i>=-100000;i--)
	{
		if(!m.count(i))
		{
			arr[cnt]=i;
			cnt++;
		}
	}
	int q,k;
	scanf("%d",&q);
	for(int i=0;i<q;i++)
	{
		scanf("%d",&k);
		printf("%d\n",arr[k-1]);
	}
}