#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
	int t;
	cin>>t;
	int a[1002],b[10002];
	while(t--)
	{
		int n,c1,c2,d,x;
		cin>>n;
		d=n/2;
		string s;
		for(int i=1;i<=n;i++){
			c1=0;
			c2=0;
			cin>>s;
			for(int j=1;j<=n;j++)
			{
				if(j<=d && s[j-1]=='1')
					c1++;
				if(j>d && s[j-1]=='1')
					c2++;
			}
			a[i]=c1; b[i]=c2;
		}
		int v1=0,v2=0;
		for(int i=1;i<=n;i++)
		{
			v1+=a[i];
			v2+=b[i];
		}
		int ans=abs(v1-v2),val;
		for(int i=1;i<=n;i++)
		{
			val=abs(v1-v2+2*(b[i]-a[i]));
			if(val<ans)
				ans=val;
		}
		cout<<ans<<endl;
	}
}