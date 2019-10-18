#include<stdio.h> 
#include<string.h>
#include<math.h>
int main (void)
{
    int T;
    scanf("%d",&T);
    for(int g=0;g<T;g++)
    {
    int a[500006];
    char s[500005];

    scanf("%s",s);
    int n = strlen(s),count=0;

    int j=0;
    for (int i=0;i<n;i++)

    {
        if (s[i]==('('))
        {
            count++;
            a[j]=count;
            j++;
        }
        else if (s[i]==(')'))
        {
            count--; 
            a[j]=count;
            j++;
        }
    }
    a[j]='\0';

    int max=a[0];

    for (int p=0;p<n-1;p++)
    {
        max = fmax(a[p],max);
    }
    printf("%d\n",max);
    }
    return 0;
}
