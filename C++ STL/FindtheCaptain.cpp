    #include<bits/stdc++.h>
    using namespace std;
    int main() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        long long n,q,i,capl,capr,x,qq;
        cin>>n>>q;
        set<long long> st;
        set<long long > :: iterator it;
        long long a[10001];
        for(i=0;i<n;++i) {
            cin>>a[i];
        }
        while(q--) {
            cin>>x>>qq;
            if(x==1) {
                printf("bb\n");
                st.insert(qq);
            }
            else {
                printf("aa\n");
                it=st.lower_bound(qq);
                if(it==st.end())cout<<a[n-1]<<"\n";
                else cout<<*it<<"\n";
            }
        }
        return 0;
    } 