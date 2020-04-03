#include<iostream>
#include<stdio.h>
#include<string.h>
 
#define MAX 101
 
using namespace std;
 
int R, C;
char input[MAX][MAX];
 
int x[8] = {0, 0, 1, -1, 1, 1, -1, -1};
int y[8] = {1, -1, 0, 0, 1, -1, 1, -1};
 
bool visited[MAX][MAX];
//char pattern[10] = {'A', 'L', 'L', 'I', 'Z', 'Z', 'W', 'E', 'L', 'L'};
string pattern="ALLIZZWELL";
bool checkValid(int i, int j){
    if(i>=0 && i<R && j>=0 && j<C)
        return true;
 
    return false;
}
int solve(int i,int j,int n)
{
    if(n==10)
        return 1;
    int r1,c1;
    visited[i][j]=1;
    for(int k=0;k<8;k++)
    {
        r1=k+x[k];
        c1=k+y[k];
        if(checkValid(r1,c1) && input[r1][c1]==pattern[n] && !visited[r1][c1])
            if(solve(r1,c1,n+1))    return 1;

    }
    visited[i][j]=0;
    return 0;
}
string dfs(int i, int j, int pattern_index){
    //cout << "i " << i << " j " << j << " index " << pattern_index << endl;
    string s;
    if (pattern_index == pattern.size())
        return "YES";
        int r,c;
        visited[i][j] = 1;
        for(int x_i=0; x_i<8; x_i++){
            r=i+x[x_i]; c=j+y[x_i];
                if(checkValid(r,c) && input[r][c] == pattern[pattern_index] && !visited[r][c]){
                    s = dfs(r, c, pattern_index + 1);
                    if (s == "YES")
                        return s;
            }
        }
    
    visited[i][j] = 0;
    return "NO";
}
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &R,&C);
 
        memset(visited, 0, sizeof(visited));
 
        for(int i=0; i<R; i++){
                scanf("%s", input[i]);
                //cout << input[i];
        }
 
        int flag = false;
 
        for( int i=0; i<R; i++){
            for(int j=0; j<C; j++){
                if(input[i][j] == 'A' && solve(i, j, 1)){
                        flag = true;
                        break;
                }
            }
            if(flag)
                break;
        }
 
        if(flag){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
 
    }
    return 0;
}