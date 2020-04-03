/*
  "I knew I shouldn't have gotten out of bed today."
   - Squidward Tentacles
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<LL,LL> p64;
typedef vector<LL> v64;

#define pb           push_back
#define pf           push_front
#define mp           make_pair
#define ff           first
#define ss           second
#define rep(i,s,e)   for(int i=s;i<=e;i++)
#define brep(i,s,e)  for(int i=s;i>=e;i--)
#define mem(x,y)     memset(x,y,sizeof(x))
#define DANGER       std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int n,m;
    vector<vector<char>> x(1001,vector<char>(1001));
    vector<vector<int>> visited(1001,vector<int>(1001,0));
void dfs(int i,int j)
{
    cout<<"i=  "<<i<<" j=  "<<j<<" ==  "<<visited[i][j]<<"\n";
    if(i<0 || j<0 || i>=n || j>=m || visited[i][j])
    {
        return;
    }
   else
    {
        if(x[i][j]=='N')
        {
            cout<<"1"<<"\n";
            dfs(i-1,j);
        }
        else if(x[i][j]=='S')
        {
            cout<<"2"<<"\n";
            dfs(i+1,j);
        }
        else if(x[i][j]=='E')
        {
            cout<<"3"<<"\n";
            dfs(i,j+1);
        }
        else
        {
            cout<<"4"<<"\n";
            dfs(i,j-1);
        }
    }
    
}
int main()
{
    cin>>n>>m;

    cout<<"\nwhat the actual fuck\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>x[i][j];
        }
    }

    cout<<"what\n";

    int ct=0;


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!visited[i][j])
            {   
                ct++;
                dfs(i,j);
            }
        }
    }



    cout<<ct<<"\n";
}