#include<stdio.h>
long int m = 1000000000+7;
int gcd(int a,int b){
  if(b==0)
    return a;
    return gcd(b,a%b);
}
long int ans;
long int modrec(int a,int b,long int m){
if(b==0)
    return 1;
if(b==1)
    return a%m;

    ans=modrec(a,b/2,m);
    ans=(ans*ans)%m;

    if(b%2==1)
    ans=(ans*a)%m;

    return ans;

}
int main(){
    int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  int gx=gcd(a[0],a[1]);
  for(int i=2;i<n;i++){
    gx=gcd(gx,a[i]);
  }
  long int r=1;
  for(int i=0;i<n;i++){
    r=(r*modrec(a[i],gx,m))%m;
  }
  printf("%ld",r);


}
