#include<stdio.h>
int main(){
int a,b;
printf("Enter the value of a and b : ");
scanf("%d %d",&a,&b);
int ans=1;
while(b!=0){
    if(b%2==1)
    ans*=a;
    a=a*a;
    b/=2;

}
printf("%d",ans);
}
