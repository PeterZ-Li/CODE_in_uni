#include<stdio.h>

#define N 100

int main(void)
{
    int a[N]={1,2,3,4},b[N];
    b[1]=a[0];
    b[3]=a[1];
    for(int i=0;i<=4;i++)
    {
        printf("%d",b[i]);//未初始化，则随机赋值，printf会输出随机值
    }    
    return 0;
}