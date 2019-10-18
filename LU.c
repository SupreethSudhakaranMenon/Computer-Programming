#include<stdio.h>
long long int powermod(long long int a,long long int b,long long int m);
int main (void)
{

    int n,q;
    scanf("%d %d",&n,&q);
    long long int a[n];

    for(int t=0;t<n;t++)
    {
        scanf("%lld",&a[t]);
    }
    /*for (int l1=0;l1<n;l1++)
      {
      printf(" %d ",a[l1]);
      }*/
        long long int l,r,x;
       /* for (int h=0;h<q;h++)

        {
            {
                scanf("%d %d %d",&l,&r,&x);
            }
            for(int j=l;j<=r;j++)
            {
                a[j]=a[j]+x;
            }
        }*/
        long long int d[n];

        for(int t=0;t<n;t++)
        {
             d[t]=0;
        }
        
        for (int h=0;h<q;h++)
        {
            scanf("%lld %lld %lld",&l,&r,&x);
                    d[l]+=x;
                    d[r+1]-=x;
        }
        for (int h=1;h<n;h++)
        {
            d[h]=d[h-1]+d[h];
        }

        for (int h=0;h<n;h++)
             {
                 a[h]=a[h]+d[h];
             }
    

    /*for (int l1=0;l1<n;l1++)
    {
        {
            printf(" %d ",a[l1]);
        }
        printf("\n");
    }*/

    long long int m=1000000007;
      long long int s=0;
      for (long long int k=0;k<n;k++)
      {
      long long int p,mod;

      mod= powermod(107,k,m);
      s=(s%m+(mod%m*((a[k]%m)+m)%m))%m;
      }
      printf("%lld\n",s);
      
    return 0;
}

long long int powermod(long long int a,long long int b,long long int m)
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
