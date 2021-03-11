#include<stdio.h>

#define N 4

int main()
{
    int a[N],t;
    for(int i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
        getchar();
    }
    for(int j=0;j<2;j++)
    {
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
    if(a[0]+a[1]<=a[2])
    {
        printf("not a triangle");
    }
    else if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}