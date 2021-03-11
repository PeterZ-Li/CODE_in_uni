#include<stdio.h>

int main()
{
    int n,m,x,y;
    scanf("%d%d",&n,&m);
    x=2*n-m/2;//分数就是除法，莫添加分数
    y=m/2-n;
    if(m%2==1||x<0||y<0)//该表达式为逻辑或，即只要有一个成立则执行下面的表达式
    {
        printf("No answer\n");
    }
    else
    {
        printf("%d %d\n",x,y);
    }
    return 0;
}