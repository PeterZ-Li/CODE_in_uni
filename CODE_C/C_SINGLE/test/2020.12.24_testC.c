#include<stdio.h>

#define N 50

int main(void)
{
    int a[N]={1,1},n;
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(int j=n-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
    return 0;
}