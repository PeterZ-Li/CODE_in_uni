#include <stdio.h>

#define N 100

void NumberMov(int *data,int m);

int main()
{
    int a[N],n,m,*p;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        getchar();
    }
    scanf("%d",&m);
    p=&a[n-m];
    NumberMov(p,m);
    p=a;
    m=n-m;
    NumberMov(p,m);
    return 0;
}

void NumberMov(int * data, int m)
{
    for(int j=0;j<=m-1;j++)
    {
        printf("%d ",*data);
        data++;
    }
}