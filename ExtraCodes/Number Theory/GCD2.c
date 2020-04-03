#include<stdio.h>
#include<string.h>
long gcd(long a,long b){
if(b==0)
    return a;
    else
        return gcd(b,a%b);
}
int main(){
int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
 long a;
 char b[256];
 scanf("%ld %s",&a,b);
 long sum=0;
    if(a!=0){
 for(int i=0;i<strlen(b);i++)
     sum=((sum*10)%a+b[i]-'0')%a;
 printf("%ld\n",gcd(a,sum));
    }
 else
    printf("%s\n",b);
 }
 return 0;
}
