#include<stdio.h>
int ans;
int pow(int a,int n){
    if(n==0)
        return 1;
    if(n==1)
        return a;
    ans=pow(a,n/2);
    ans=ans*ans;
    if(n%2==1)
        ans=ans*a;
        return ans;
}
int main(){
    int a,n;
printf("Enter the value of a and b : ");
scanf("%d %d",&a,&n);
printf("%d",pow(a,n));

}
