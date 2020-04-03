#include <stdio.h>

int main(void) {
	int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
    int n,k,v,sum=0,cnt=1;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int j=0;j<n;j++)
        scanf("%d",&a[j]);
        sum=a[0];
        cnt++;
        for(int j=1;j<n;j++){
               if(cnt%2==1){
                if(sum>=0)
                sum+=a[j];
                else
                sum-=a[j];
               }
               else{
                if(sum>=0)
                sum-=a[j];
                else
                sum+=a[j];
               }
               cnt++;
        }
        if(sum<0)
        v=-sum;
        else
        v=sum;
            if(v>=k)
            printf("%d\n",1);
            else
                printf("%d\n",2);
}
	return 0;
}

