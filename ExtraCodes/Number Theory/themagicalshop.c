#include<stdio.h>
#include<string.h>
int main(){
long int a,b;
char c[100000];
scanf("%ld %ld",&a,&b);
scanf("%s",c);
long int res=0,p=a%b;
for(int i=0;i<strlen(c);i++){
    if(c[i]=='1'){
    res+=p;
    res%=b;
    }
    p=(p%b*p%b)%b;
}
printf("%ld",res);
}
