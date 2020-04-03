#include<bits/stdc++.h>
using namespace std;
 
#define Boost() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define FOR(i,b,e) for(ll i=b;i<e;i++)
#define RFOR(i,s,e) for(ll i=s-1;i>=e;i--)
 
#define res(n) resize(n) 
#define pub(a) push_back(a)
#define pb push_back
#define pob() pop_back()
#define mp(a,b) make_pair(a,b)
#define pll pair<ll,ll>
 
#define pln(a) cout<<a<<"\n"
#define pls(a) cout<<a<<" "
#define T() while(t--)
#define mod 1000000007
#define mem(a,x,n) memset(a,x,n*sizeof(ll))
 
bool Comparator(const pair<int,int> &a,const pair<int,int> &b){
	return (a.second<b.second);
}
 
int main(){
	Boost()
    vector<ll> vec;
	ll s=2,p,cnt=2,n;
	 vec.pb(0);
	 vec.pb(2);
	while(s<=1000000000000)
	{
	    p=s;
	    s=s+(ll)sqrt(s);
	    if(p<=cnt*cnt && s+1>=cnt*cnt)
	    {
	        s++;
	        cnt++;
	    }
	    s++;
	     vec.pb(s);
	}
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    
	    if(binary_search(vec.begin(),vec.end(),n))
	        cout<<"Second";
	    else
	        cout<<"First";
	   cout<<endl;
	}
	return 0;
}