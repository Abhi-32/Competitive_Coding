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
		string s;
		cin>>s;
		int cnt=0;
		for(int i=0;i<s.size();i++)
			if(s[i]=='1')
				cnt++;
		if(cnt%2==1)
			printf("WIN\n");
		else
			printf("LOSE\n");
	}
}