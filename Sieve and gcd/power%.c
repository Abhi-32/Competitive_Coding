#include<stdio.h>
int main(){
int a,n,c;
printf("Enter the value of a and n and c: ");
scanf("%d %d %d",&a,&n,&c);
int ans=1;
while(n!=0){
    if(n%2==1){
    ans*=a;
    ans%=c;
    }
    a=a*a;
    a%=c;
    n/=2;

}
printf("%d",ans);
}

