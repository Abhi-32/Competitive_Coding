#include<stdio.h>
#include<stdlib.h>
long long ans;
int poww(int a,int n,int m){
	if(a==0)
        return 0;
    if(n==0)
       return 1;
    if(n==1)
        return (a%m+m)%m;
    ans=poww(a,n/2,m);
    ans=(ans*ans)%m;
    if(ans<0)
        ans=(ans%m+m)%m;
    if(n%2==1){
        ans=(ans*a)%m;
        if(ans<0)
        ans=(ans%m+m)%m;
    }
    if(ans<0){
        ans=(ans%m+m)%m;
    }
    return ans%m;
}
int main(){
int a,n,m;
printf("Enter the value of a and n and c: ");
scanf("%d %d %d",&a,&n,&m);
printf("%d\n",poww(a,n,m));
}
