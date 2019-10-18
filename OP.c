#include<stdio.h>

int main (void)
{
    int T;
    scanf("%d",&T);
    for(int p=0;p<T;p++)
    {
    int N,s=1,n=0;
    scanf("%d",&N);
    while (N>=s)
    {
        N=N-s;
        n++;
        s = 4*n+s;
    }
    printf("%d\n",n);
    }
    return 0;
}

