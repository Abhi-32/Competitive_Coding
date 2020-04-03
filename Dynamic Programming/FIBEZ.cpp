#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int m=1e8+7;
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int arr[500001]={0};
	arr[1]=1;
	arr[2]=1;
	for(int i=3;i<=500000;i++)
		arr[i]=(arr[i-1]+arr[i-2])%m;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%d\n",arr[n]%m);
	}
}
