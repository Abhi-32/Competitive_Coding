#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
	int t=5;
	while(t--)
	{
		string s;
		cin>>s;
		int d=1,ans=0,l=s.size();
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]>='0' && s[i]<='9')
			{
				ans+=ans+d*(s[i]-'0');
				l--;
				d*=10;
			}
			else
			{
				break;
			}
		}
		if(l==ans)
			printf("Yes\n");
		else
			printf("No\n");
	}
}