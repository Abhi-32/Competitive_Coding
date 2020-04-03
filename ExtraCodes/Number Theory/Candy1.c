#include<stdio.h>
int main(){
while(1){
int n;
scanf("%d",&n);
if(n==-1)
break;
int a[n];
for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  int sum=0;
for(int i=0;i<n;i++)
    sum+=a[i];
if(sum%n==0){
    int cnt=0,candy=sum/n;
    for(int i=0;i<n;i++){
        if(candy>a[i])
        cnt+=(candy-a[i]);
    }
    printf("%d\n",cnt);


}
else
    printf("%d\n",-1);
}

}
