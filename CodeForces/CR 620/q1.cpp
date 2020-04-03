#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--)
    {
	int N, start = 1, length = -1;
    cin >> N;
	vector<int> v(N), prefix_sum(N+1), best(N+1);
 
	prefix_sum[0] = 0;
	for(int i=1; i<N+1; ++i){
		cin >> v[i-1];
		prefix_sum[i] = prefix_sum[i-1] + v[i-1];
	}
 
	best[N] = prefix_sum[N];
	for(int i=N-1; i>-1; --i)
		best[i] = max(best[i+1], prefix_sum[i]);
 
	for(int end=1; end<N+1; ++end){
		if(best[end] > prefix_sum[start-1]) 
			length = max(length, end-start+1);
		else ++start;
	}

 
	cout << length << "\n";
    }
    return 0;
}