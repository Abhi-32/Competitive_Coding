#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> v;
    int a[100][100]={0},b[100][100]={0};
    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    		cin>>a[i][j],b[i][j]=0;

    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++)
    	{
    			if(i<n-1 && j<m-1 && a[i][j] && a[i][j+1] && a[i+1][j] && a[i+1][j+1])
    			{
    				b[i][j]=1; b[i][j+1]=1; b[i+1][j]=1; b[i+1][j+1]=1; 
    				v.pb({i+1,j+1});
    			}
    	}
    }

    int flag=1;
    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    		if(a[i][j]!=b[i][j])     
    			flag=0;

    if(flag)
    {
    	cout<<v.size()<<"\n";
    	for(pair<int,int> p:v)
    		cout<<p.first<<" "<<p.second<<"\n";
    }
    else
    	cout<<"-1";
}