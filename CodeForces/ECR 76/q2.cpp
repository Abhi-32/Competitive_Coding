#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mod = 1000000007;
const int m=1e9+7;

int main()
{
	int t,x,y;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		if(y<=x)
			cout<<"YES";
		else if(x<=3)
		{
			if(x==2 && y==3)
				cout<<"YES";
			else
				cout<<"NO";
		}
		else
			cout<<"YES";
		cout<<"\n";
	}
}