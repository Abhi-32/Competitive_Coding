#include<stdio.h>
long poww(long a,long n,long m){
if(n==0)
    return 1;
if(n==1)
    return a%m;
   long ans=poww(a,n/2,m);
    if(n%2==0)
        return (ans*ans)%m;
    else
        return ((ans*ans)%m*(a%m))%m;
    }
int main(){
long n,k,m=10000007;
scanf("%ld %ld",&n,&k);
while(k!=0 || n!=0){
long z=(poww(n,k,m)+2*poww(n-1,k,m)+poww(n,n,m)+2*poww(n-1,n-1,m))%m;
printf("%ld\n",z);
scanf("%ld %ld",&n,&k);
}
return 0;
}
