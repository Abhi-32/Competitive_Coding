#include<stdio.h>
int gcd(long a,long b){
if(b==0)
    return a;
    else
        return gcd(b,a%b);
}
int main(){
int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
long a,b;
scanf("%ld %ld",&a,&b);
int g=gcd(a,b);
long x,y;
x=b/g;
y=a/g;
printf("%ld %ld",x,y);
}
}
