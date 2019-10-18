#include<stdio.h>
#include<math.h>
int main(void)
{
    int T;
    scanf("%d",&T);
    for (int p=0;p<T;p++)
    {
        long long int f,l;
        scanf("%lld %lld",&f,&l);

        if (f==l)
        {
            printf("%lld\n",f);
        }
        else 
        {
            while ((f|(f+1))<=l)
            {
                f=(f|(f+1));
            }
            printf("%lld\n",f);
        }
    }
    return 0;
}

