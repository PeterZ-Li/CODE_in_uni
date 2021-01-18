#include<stdio.h>

#define N 100

int main(void)
{
    int a[N],move,direction,len,i,j;
    scanf("%d %d",&len,&move);
    getchar();
    scanf("%d",&direction);
    getchar();
    for(i=0;i<=len-1;i++)
    {
        scanf("%d",&a[i]);
        getchar();
    }
    if(direction==1)
    {
        for(j=move;j<=len-1;j++)
        {
            printf("%d ",a[j]);
        }
        for(i=0;i<=move-1;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else if(direction==0)
    {
        for(j=len-move;j<=len-1;j++)
        {
            printf("%d ",a[j]);
        }
        for(i=0;i<=len-move-1;i++)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}