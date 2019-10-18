#include<stdio.h>
int main (void)
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    
    long long int s[n];
    s[0]=a[0];
    
    for (long long int i=1;i<n;i++)
    {
        s[i]=s[i-1]+a[i];
    }
    
    /*for(int i=0;i<n;i++)
    {
        printf(" %lld ",s[i]);
    }*/

    long long int t=0,c1=0,c2=0;
    
    if (s[n-1]==0)
    {
        for(int i=0;i<n;i++)
        {
            if (s[i]==0)
            c1++;
        }
        printf("%lld\n",((c1-1)*(c1-2))/2 );
    }
     
    
    if (s[n-1]%3!=0)
    {
        printf("0\n");
    }

    else if (s[n-1]%3 == 0 && s[n-1]!=0)
    {
        
        long long int l1 = s[n-1]/3 , l2 = (2 * s[n-1])/3 ;
        for (long long int i=n-2;i>=0;i--)
        {
            if (s[i]==l2)
                c1++;
            if (s[i]==l1)
                c2 = c2+c1;
        }
    printf("%lld\n",c2);

    }
    return 0;
}
