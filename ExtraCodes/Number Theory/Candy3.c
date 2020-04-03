#include<stdio.h>
int main(){
long long int t;
scanf("%lld",&t);
for(long long int i=0;i<t;i++){
	    printf("\n");
    long long int n,sum=0,temp;
    scanf("%lld",&n);
    for(long long int j=0;j<n;j++){
      scanf("%lld",&temp);
      sum=(sum%n+temp%n)%n;
    }
    if(sum%n==0)
        printf("YES\n");
    else
    printf("NO\n");

}
return 0;
}
