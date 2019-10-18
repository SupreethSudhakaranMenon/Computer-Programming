#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int x[n+1],y[n+1];
    for (int i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    x[n]=x[0];
    y[n]=y[0];
    int x_max=x[0],y_max=y[0],x_min=x[0],y_min=y[0];
    for (int b=0;b<n+1;b++)
    {
        x_max = fmax (x_max,x[b]);
        y_max = fmax (y_max,y[b]);
        x_min = fmin (x_min,x[b]);
        y_min = fmin (y_min,y[b]);
    }
    long long int sx[n],sy[n];
    for (int k=0;k<n;k++)
    {
        sx[k]=0;
        sy[k]=0;
    }

    if (x[0]==x[1])
    {
        for (int a=0;a<n;a=a+2)
        {
            sy[a/2]=llabs(y[a+1]-y[a]);
            sx[a/2]=llabs(x[a+2]-x[a+1]);    
    
        }
    }
    else
    {
        for (int a=0;a<n;a=a+2)
        {
    
            sx[a/2]=llabs(x[a+1]-x[a]);
            sy[a/2]=llabs(y[a+2]-y[a+1]);
        }
    }
    
    long long int sx_max=sx[0],sy_max=sy[0],sxt=0,syt=0;
    for (int t=0;t<n;t++)
    {
        sxt = sxt + sx[t];
        syt = syt + sy[t];
        sx_max = fmax(sx_max,sx[t]);
        sy_max = fmax(sy_max,sy[t]);
    }

    long long int s;
    s= sxt + syt - 2*(abs(x_max-x_min) + abs(y_max-y_min));
      printf("%lld",s);

    return 0;
 }
