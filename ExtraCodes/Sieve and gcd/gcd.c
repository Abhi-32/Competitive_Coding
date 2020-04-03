#include<stdio.h>
int x,y,d;
void gcd(int a,int b){
if(b==0){
    d=a;
    x=1;
    y=0;

    }
else
    {
    gcd(b,a%b);
    int term =x;
    x=y;
    y=term-(a/b)*y;
    }
}
int main(){
int a,b;
scanf("%d %d",&a,&b);
gcd(a,b);
printf("%d     %d %d",d,x,y);
}