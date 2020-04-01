#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n,q,l,r;
	cin>>t;
	while(t--)
	{
		int arr[100005]={0};
		cin>>n>>q;
		string s;
		cin>>s;
		for(int i=0;i<n;i++)
		{
		    
			if(i<n-1 && s[i]==s[i+1])
				arr[i+1]=1;
			if(i<n-2 && s[i]==s[i+2])
				arr[i+1]=1;
		}
		for(int i=1;i<=n;i++)
			arr[i]+=arr[i-1];

		while(q--)
		{
			cin>>l>>r;
			if(r-l+1<3)
				printf("NO\n");
			else if(arr[r-2]-arr[l-1]>0 || s[r-2]==s[r-1])
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
}