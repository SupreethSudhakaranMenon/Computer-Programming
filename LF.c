#include<stdio.h>
void reverseprint (int str[],int t);
int main (void)
{
    int T;
    scanf("%d",&T);
    for(int x=0;x<T;x++)
    {
    int prod,n,d=1,a[1000000],ca=0;
    
    scanf("%d", &n);
    a[0]=1;
    for(int i=1;i<=n;i++)
    {
        for (int k=0;k<d;k++)
        {
        prod = ca+i*a[k];
        a[k]=prod%10;
        ca=prod/10;        
        }
        while (ca>0)
        {
        a[d]=ca%10;
        ca=ca/10;
        d++;
        }

    
    }
       reverseprint(a,d);

    }
    return 0;
}

void reverseprint (int str[],int t)
{
    for(int h=t-1;h>=0;h--)
        printf("%d",str[h]);
    printf("\n");
};
