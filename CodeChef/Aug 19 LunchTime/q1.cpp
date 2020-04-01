#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,b,p,f,c,h,d,ans;
    cin>>t;
    while(t--)
    {
    	cin >> b >> p >> f;
        cin >> h >> c;

        b /= 2;
        if(h < c){
            swap(h, c);
            swap(p, f);
        }

        int res = 0;

        int cnt = min(b, p);
        b -= cnt, p -= cnt;
        res += h * cnt; 
        
        cnt = min(b, f);
        b -= cnt, f -= cnt;
        res += c * cnt; 
            
        cout << res << endl;
    }
}