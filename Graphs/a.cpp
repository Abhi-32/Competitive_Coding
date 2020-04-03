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

int main()
{
	ll n,m,u,v,x;
	vector<vector<int>> intervals={{1,18},{2,11},{12,16},{13,17}};
	sort(intervals.begin(), intervals.end() );
        
        priority_queue<int, vector<int>, greater<int>> heap;
        int rooms = 0;
        heap.push(intervals[0].back());
        rooms++;
        
        for (int i = 1; i < intervals.size(); i++) {
        	printf("%d  %d\n",intervals[i].front(),heap.top());
            if (intervals[i].front() < heap.top()) {
                rooms++;
            } else {
                heap.pop();
            }
            heap.push(intervals[i].back());
        }
        cout<<rooms<<"\n";
}

int Solution::solve(vector<vector<int> > &v) {
     int n=v.size();
     int ans=1;
     priority_queue<int,vector<int>,greater<int>> pq;
     pq.push(v[0][1]);
     
     for(int i=1;i<n;i++)
     {
         if(v[i][0] < pq.top())
            ans++;
        else
            pq.pop();
        pq.push(v[i][1]);
     }
     return ans;
}
