#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	scanf("%d",&n);
	unordered_map<int,int> m;
	set <int> s;
	string s1;
	bool f1,f2;
	for(int i=0;i<n;i++)
	{	
		f1=f2=0;
		cin>>s1>>k;
		if(s1=="insert"){
			m[k]++;
			if(m[k]>=2)
				s.insert(k);
		}
		else
		{	
			if(m.count(k))
				m[k]--;
			if(m[k]<2)
				s.erase(k);
		}
		if(m[k]==0)
		{
			m.erase(k);
		}
		if(s.size()>=1)
		{
			f1=1;
		}
		if(m.size()>1)
		{
			f2=1;
		}
		if(f1 && f2)
			cout<<"both";
		else if(f1)
			cout<<"homo";
		else if(f2)
			cout<<"hetero";
		else
			cout<<"neither";
		cout<<endl;
	}
}