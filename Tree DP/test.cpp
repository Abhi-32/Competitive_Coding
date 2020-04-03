#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
 int dp[101][101][2];
    int sol(vector<vector<int>> v,int n,int i,int j,int val,int s)
    {
        if(i<0 || j<0 || i>=n || j>=n || v[i][j]==-1)
            return 0;
         if(i==n-1 && j==n-1 && s==0){
            s=1;
            if(i==0 && j==0)
            	return max(v[i][j],val);
        }
        if(i==0 && j==0 && s==1)
            return val;
        if(dp[i][j][s]!=-1)
            return dp[i][j][s];
        
        if(v[i][j]==0 && s==0)
            return max(sol(v,n,i+1,j,val,s),sol(v,n,i,j+1,val,s));
        if(v[i][j]==1 && s==0){
            v[i][j]=0;
            return max(sol(v,n,i+1,j,val+1,s),sol(v,n,i,j+1,val+1,s));
        }
        
        if(v[i][j]==0 && s==1)
            return max(sol(v,n,i-1,j,val,s),sol(v,n,i,j-1,val,s));
        if(v[i][j]==1 && s==1){
            v[i][j]=0;            
            return max(sol(v,n,i-1,j,val+1,s),sol(v,n,i,j-1,val+1,s));
        }
        return 0;
    }
    int cc(vector<vector<int>>& v) {
        memset(dp,-1,sizeof(dp));
        return sol(v,v.size(),0,0,0,0);
    }
int main()
{
	vector<vector<int>> v={{1,1,1,1,0,0,0},{0,0,0,1,0,0,0},{0,0,0,1,0,0,1},{1,0,0,1,0,0,0},{0,0,0,1,0,0,0},{0,0,0,1,0,0,0},{0,0,0,1,1,1,1}};
	printf("%d\n",cc(v));
}