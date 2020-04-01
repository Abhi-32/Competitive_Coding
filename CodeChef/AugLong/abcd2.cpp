#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
	long long b[1000002]={0};
	long long arr[1000001];
	long long t,x;
	cin>>t;
	long long cnt=0;
	while(t--)
	{
	    cnt=0;
	    memset(b,0,sizeof(b));
	    memset(arr,0,sizeof(arr));
	    unordered_map<long long,vector<long long> > m;
	    m[0].push_back(0);
	    long long n;
		cin>>n;
		for(int i=0;i<n;i++)
			scanf("%lld",&arr[i]);
		for(int i=1;i<=n;i++){
			b[i]=b[i-1]^arr[i-1];
		    m[b[i]].push_back(i);
		}
		
		auto it =m.begin();
		while(it!=m.end())
		{
			vector<long long> tmp;
			tmp=m[it->first];
			int l=tmp.size();
			long long sum=0;
			vector<long long> v;
			int k=1;
		    for(int i=l-1;i>=0;i--)
		    {
		    cnt+=tmp[i]*(l-k);
		    k+=2;
		    }
			sum=(1ll*l*(l-1))/2;
			cnt-=sum;
			it++;
		}
		m.clear();
		cout<<cnt<<endl;
	}
}