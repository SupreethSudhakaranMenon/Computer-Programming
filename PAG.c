#include<stdio.h>
long long int f[20000005];
long long int powermod(int a,int b,long long int m);
int main (void)
{
    f[0]=1;
    for (int k=1;k<2000005;k++)
    {
        f[k]= (f[k-1]*(k%(1000000007))%(1000000007));
    }
    long long int g=1000000007;
        long long int h=g-2;
    int T;
    scanf("%d",&T);
    for (int i=0;i<T;i++)
    {
    int x,y;
    scanf("%d %d",&x,&y);
    long long int q=f[x+y],r=f[x],s=f[y];
//printf("%lld %lld %lld",q,r,s);
    
    int p1= powermod(r,h,g),p2= powermod(s,h,g);
    long long int t=((q%g*(p1%g*p2%g)%g)%g);
    printf("%lld\n",t);
    }

    return 0;
}

long long int powermod(int a,int b,long long int m)
{
    long long int r=1;
        while (b>0)
        {      
            if (b%2==1)
                r=(r%m*a%m)%m;
            b=b/2;
            a=(a%m*a%m)%m;
        }
    return r;
}
