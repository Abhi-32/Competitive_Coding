#include<stdio.h>
int main(){
   long int m=1000007;
int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
       int n,ans;
    scanf("%d",&n);
    ans=(((3*n+1)%m*(n%m))/2)%m;
printf("%d\n",ans);
}
return 0;
}
