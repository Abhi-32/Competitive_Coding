#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
long long b[100002]={0};
long long arr[100001];
int main()
{
	long long t,x;
	cin>>t;
	long long cnt=0;
	while(t--)
	{

	    cnt=0;
	    memset(b,0,sizeof(b));
	    memset(arr,0,sizeof(arr));
	    long long n;
		cin>>n;
			for(int i=0;i<n;i++)
			scanf("%lld",&arr[i]);
		for(int i=1;i<=n;i++)
			b[i]=b[i-1]^arr[i-1];

		unordered_map<long long,vector<long long> > m;
		for(int i=0;i<=n;i++)
			m[b[i]].push_back(i);
		auto it =m.begin();
		while(it!=m.end())
		{
			vector<long long> tmp;
			tmp=m[it->first];
			int l=tmp.size();
			long long sum=0;
			vector<long long> v;
			for(int i=0;i<l;i++)
				{
					sum+=tmp[i];
					v.push_back(sum);
				}
			for(int i=1;i<l;i++)
				{	
					cnt=cnt+tmp[i]*i-v[i-1];
				}
			sum=(l*(l-1))/2;
			cnt-=sum;
			it++;
			v.clear();
		}
		m.clear();
		cout<<cnt<<endl;
	}
}