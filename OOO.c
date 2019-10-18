#include<stdio.h>
void merge (long long int a[],long long int start ,long long int en);
void mergesort(long long int a[],long long int start,long long int en);
int main (void)
{
    int T;
    scanf("%d",&T);
    for (int i=0;i<T;i++)
    {
        long long int N,a[100005];
        
        scanf ("%lld",&N);
        
        for (int y=0;y<N;y++)
        {
            scanf("%lld",&a[y]);
        }
        
        mergesort(a,0,N-1);
        

        /*for (int k=0;k<N;k++)
        {
            printf("%lld",a[k]);
        }*/
        if (a[N-1]!=a[N-2])
        {
            printf("%lld\n",a[N-1]);
        }
        
        else if (a[0]!=a[1])
        {
            printf("%lld\n",a[0]);
        }
        
        else
        {
        for (int f=0;f<N-1;f=f+3)
        {
            if ((a[f]!=a[f+1]))
            
            {
                printf("%lld\n",a[f]);
                break;
            }

        }
        }
    }

    return 0;
}
void merge (long long int *a,long long int start ,long long int en)
{
    int mid=(start+en)/2;
    int i =start;
    int j=mid+1;
    int k=start;
    int tem[en-start+1];
    while(i<=mid && j<=en)
    {
        if (a[i]<=a[j])
        {
            tem[k-start]=a[i];
            k++;
            i++;
        }
        else
        {
            tem[k-start]=a[j];
            k++;
            j++;
        }
    }
    while (i<=mid)
    {
        tem[k-start]=a[i];
        k++;
        i++;
    }
    while(j<=en)
    {
        tem[k-start]=a[j];
        k++;
        j++;
    }
    for (int d=start;d<=en;d++)
    {
        a[d]=tem[d-start];
    }
}

void mergesort(long long int a[],long long int start, long long int en)
{
    if (start>=en)
    {
        return;
    }
    
    int mid = (start+en)/2;
    
    mergesort(a,start,mid);
    mergesort(a,mid+1,en);
    
    merge (a,start,en);
    
    
    
}
