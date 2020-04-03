#include<stdio.h>
long gcd(long a,long b){
if(b==0)
    return a;
    else
        return gcd(b,a%b);
}
int main(void){
	int t;
scanf("%d",&t);
long n,q,l,r,g=0;
int cnt=1;
for(int i=0;i<t;i++){
        scanf("%ld %ld",&n,&q);
        long a[n];
        for(long j=0;j<n;j++)
            scanf("%ld",&a[j]);
        for(long j=0;j<q;j++){
          scanf("%ld %ld",&l,&r);
          l--; r--;
          cnt=1;
          if(l==0){
            cnt=r+1;
            g=gcd(a[cnt],a[cnt]);
          }
          else{
            g=gcd(a[0],a[0]);
            cnt=0;
            }
          for(long k=++cnt;k<n;k++){
                 if(k==l){
             k=r;
             continue;
            }
             else
            g=gcd(g,a[k]);
             }
             printf("%ld\n",g);
            }
          }
}

