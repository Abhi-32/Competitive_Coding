#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        int xrr[3];
        int yrr[3];
        int x,y,xmin,ymin;
        for(i=0;i<3;i++){
            scanf("%d %d",&x,&y);
            xrr[i]=x%n;
            yrr[i]=y%n;
        }
        long int ans=0;e
        xmin=INT_MAX;
        ymin=INT_MAX;

        x=0; y=0;


        for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
            {
                x=x+abs(xrr[i]-xrr[j]);
                y=y+abs(yrr[i]-yrr[j]);
            }
            if(x<xmin)
                xmin=x;
            if(y<ymin)
                ymin=y;




        x=0; y=0;
            for(i=0;i<3;i++){
                xrr[i]=xrr[i]%n;
                yrr[i]=yrr[i]%n;
            }
            xrr[0]+=n;
            yrr[0]+=n;

        for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
            {
                x=x+abs(xrr[i]-xrr[j]);
                y=y+abs(yrr[i]-yrr[j]);
            }
            if(x<xmin)
                xmin=x;
            if(y<ymin)
                ymin=y;

             x=0; y=0;
            for(i=0;i<3;i++){
                xrr[i]=xrr[i]%n;
                yrr[i]=yrr[i]%n;
            }
            xrr[1]+=n;
            yrr[1]+=n;

        for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
            {
               x=x+abs(xrr[i]-xrr[j]);
                y=y+abs(yrr[i]-yrr[j]);
            }
            if(x<xmin)
                xmin=x;
            if(y<ymin)
                ymin=y;




               x=0; y=0;
            for(i=0;i<3;i++){
                xrr[i]=xrr[i]%n;
                yrr[i]=yrr[i]%n;
            }
            xrr[2]+=n;
            yrr[2]+=n;

        for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
            {
                x=x+abs(xrr[i]-xrr[j]);
                y=y+abs(yrr[i]-yrr[j]);
            }
            if(x<xmin)
                xmin=x;
            if(y<ymin)
                ymin=y;



               x=0; y=0;
            for(i=0;i<3;i++){
                xrr[i]=xrr[i]%n;
                yrr[i]=yrr[i]%n;
            }
            xrr[0]+=n;
            xrr[1]+=n;
            yrr[0]+=n;
            yrr[1]+=n;

        for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
            {
               x=x+abs(xrr[i]-xrr[j]);
                y=y+abs(yrr[i]-yrr[j]);
            }
            if(x<xmin)
                xmin=x;
            if(y<ymin)
                ymin=y;




                  x=0; y=0;
            for(i=0;i<3;i++){
                xrr[i]=xrr[i]%n;
                yrr[i]=yrr[i]%n;
            }
            xrr[0]+=n;
            xrr[2]+=n;
            yrr[0]+=n;
            yrr[2]+=n;

        for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
            {
                x=x+abs(xrr[i]-xrr[j]);
                y=y+abs(yrr[i]-yrr[j]);
            }
            if(x<xmin)
                xmin=x;
            if(y<ymin)
                ymin=y;




                  x=0; y=0;
            for(i=0;i<3;i++){
                xrr[i]=xrr[i]%n;
                yrr[i]=yrr[i]%n;
            }
            xrr[1]+=n;
            xrr[2]+=n;
            yrr[1]+=n;
            yrr[2]+=n;

        for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
            {
                x=x+abs(xrr[i]-xrr[j]);
                y=y+abs(yrr[i]-yrr[j]);
            }
            if(x<xmin)
                xmin=x;
            if(y<ymin)
                ymin=y;



            ans=xmin+ymin;
        printf("%ld\n",ans);
    }
    return 0;
}
