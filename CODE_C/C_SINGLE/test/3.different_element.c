#include<stdio.h>

#define N 35

int main(void)
{
    int n,a[N],b[N],j=0,k,*q=b;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        getchar();
    }
    b[0]=a[0];
    for(int i=1;i<=n-1;i++)
    {
        for(q=b;q<=&b[j];q++)
        {
            k=1;
            if(a[i]!=*q)
            {
                continue;
            }
            else 
            {
                k=0;
                break;
            }    
        }
        if(k==1)
        {
            *q=a[i];
            j++;
        }
    }
    printf("%d",j+1);
    return 0;
}