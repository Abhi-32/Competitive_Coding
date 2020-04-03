#include<stdio.h>
int main(){
int n;
long int x;
scanf("%d",&n);
int i;
long int j;
for(i=0;i<n;i++){
int c=0;
long int x;
scanf("%ld",&x);
for(j=2;j*j<=x;j++){
    if(x%j==0){
      c=1;
     break;
       }
}
if(j*j==x)
    c=0;
    if(c==0)
        printf("NO\n");
    else
        printf("YES\n");
}

}
