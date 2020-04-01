#include<stdio.h>
#include<stdlib.h>
int main()
{
    int prime[10001]={0};
/
    prime[0]=1;
    prime[1]=1;
    int i,j,n=10000,l,r;
    for(i=2;i*i<=n;i++)
        if(prime[i]==0)
            for(j=i*i;j<=n;j+=i)
                prime[j]=1;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        if(prime[x]==0)
        printf("yes\n");
        else
        printf("no\n");
    }
    return 0;
}