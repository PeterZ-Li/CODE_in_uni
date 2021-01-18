#include<stdio.h>
#include<math.h>

#define N 40

int main()
{
    int n,i,a[N],b[N]={0},*p=b;
    scanf("%d",&n);
    getchar();
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        getchar();
    }
    for(i=0;i<=n-1;i++)
    {
        if(a[i]>0&&a[i]>abs(*p)&&a[i]!=*p)
        {
            *p=a[i];
        }
        else if(a[i]<0&&a[i]<-abs(*p)&&a[i]!=*p)
        {
            *p=a[i];
        }
    }
    printf("%d",*p);
    return 0;
}