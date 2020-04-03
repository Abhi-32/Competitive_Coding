#include <stdio.h>
int main(void) {
	int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
    long n,x,sum=0;
    int k;
    scanf("%ld %d %ld",&n,&k,&x);
    long a[k],min=0;
    for(int j=0;j<k;j++){
      scanf("%ld",&a[j]);
      sum+=a[j];
        if(a[j]<min)
        min=a[j];
    }
      long b[n-k];
        long ele=x-min;
        for(long int j=0;j<n-k;j++){
                int cnt;
            while(++j){
                    cnt=1;
                for(int y=0;y<k;y++)
                    if(ele==a[k]){
                        cnt++;
                        break;
                    }
                    if(cnt==2)
                    ele--;
                    else{
                        b[j]=ele;
                        sum+=b[j];
                        ele--;
                        break;
                    }

        }



}
        printf("%ld\n",sum);
}

}
