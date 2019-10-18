#include<stdio.h>
int main (void)
{

    int T;
    scanf("%d",&T);
    
    for (int i=0;i<T;i++)
    {
        long long int w,n;
        scanf("%lld %lld",&w,&n);
        long long int s[n];

        for (int j=0;j<n;j++)
        {
            scanf("%lld",&s[j]);
        }

        long long int a,min=0,max,mid;
        max = s[n-1]-s[0];
        while (min<=max)
        {
            mid =min+(max-min)/2;
            long long int ctr=1,y=s[0];
            for (int q=1;q<n;q++)
            {
                if (s[q]-y>mid)
                {
                    ctr++;
                    y=s[q];
                }
            }
                if (ctr<w)
                    max=(mid-1);
                else
                {
                    a=mid;
                    min=mid+1;
                }
        }
        printf("%lld\n",a);
    }
    


    return 0;
}
