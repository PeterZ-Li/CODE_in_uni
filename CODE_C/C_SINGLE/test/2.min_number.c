#include<stdio.h>

#define N 15
#define M 55

int main(void)
{
    int a[N],b[M],i,j,*p=b;
    for(int n=0;n<=9;n++)
    {
        scanf("%d",&a[n]);
        getchar();
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]!=0)
        {
            j=a[i];
            while(j--)
            {
                *p=i;
                p++;
            }
        }
    }
    for(i=0;i<50;i++)
    {
        if(b[i]!=0)
        {
            printf("%d",b[i]);
            break;
        }
    }
    for(j=0;p>&b[j];j++)
    {
        if(j!=i)
        {
            printf("%d",b[j]);
        }
    }
    return 0;
}