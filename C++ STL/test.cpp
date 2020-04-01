#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,arr[1000];
    cin>>n>>k;
    for(int i=0; i < n; i++)
        cin>>arr[i];
    for(int i=0; i<n ; i++)
        if(arr[i]<=k)
            cout<<"No ";
        else cout<<"Yes ";
    cout<<endl;
    int lo=0, hi=n-1, ans=-1;
    while( lo <= hi ){
        int mid = (lo + hi)/2;
        if(arr[mid] > k){
            ans = mid;
            hi = mid-1;
        }
        else
            lo = mid+1;
    }
    if( ans==-1 )
        cout<<"All numbers are smaller";
    else cout<<arr[ans]<<"   "<<arr[lo]<<"    "<<arr[hi]<<endl;
    return 0;

}