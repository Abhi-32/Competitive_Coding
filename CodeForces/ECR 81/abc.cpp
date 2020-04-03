#include<bits/stdc++.h>
using namespace std;
#define boost() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define mem(x,y) memset(x, y, sizeof(x))
#define F first
#define S second
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
const int mod = 1e9+7;
const int N=1e5+3;
vector<ll> g[N];
vector<vector<int>> v;
int main()
{
	vector<int> arr={1,2,3,4,5,6,7,8,9,10};
	 map<int,int> m;
        for(int x:arr)
            m[x]++;
        vector<int> v;
        for(auto it:m)
            v.push_back(it.second);
        sort(v.begin(),v.end(),greater<int>());
        int t=arr.size()/2;
        int cnt=0,i=0;
        while(t>cnt)
        {
            cnt+=v[i];
            i++;
        }
        cout<<i;
            

}

    vector<int> temp;
    int calc(TreeNode* root){
        if(root==nullptr)
            return 0;
        int a=calc(root->left);
        int b=calc(root->right);
        int c=a+b+root->val;
        temp.push_back(c);
        return c;
    }
    int maxProduct(TreeNode* root) {
        long long int sum=calc(root);
        long long int t=0;
        for(int i:temp){
            t=max(t,i*(sum-i));
        }
        int ret=t%1000000007;
        return ret;
    }
