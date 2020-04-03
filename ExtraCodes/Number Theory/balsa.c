#include <stdio.h>
int main(void) {
	int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
    long n;
    scanf("%ld",&n);
    if(n<332)
    printf("%d\n",333);
    else{
        int r,cnt;
        long m;
        while(++n){
                m=n;
                cnt=0;
               while(m){
                int r=m%10;
                if(r==3)
                cnt++;
                m/=10;
                if(cnt==3)
                break;
               }
               if(cnt==3)
                break;
        }
        printf("%ld\n",n);
    }
}
}
