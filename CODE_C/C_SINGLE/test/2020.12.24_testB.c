#include<stdio.h>

#define N 100

void print_in_order(int f[], int n);/*顺序输出函数*/
void compare_number(int *pf, int *qf);/*比较并交换指针所指的数组*/

int main(void)
{
    int num,a[N],i,j,*p,*q;
    scanf("%d",&num);
    getchar();
    for(i=0;i<=num-1;i++)
    {
        scanf("%d",&a[i]);
        getchar();
    }
    for(i=0;i<=num-1;i++)
    {
        p=&a[i];
        for(j=0;j<=i;j++)
        {
            q=&a[j];
            compare_number(p,q);
        }
        print_in_order(a,i);
    }
    return 0;
}

void print_in_order(int f[], int n)
{
    for(int count=0;count<=n;count++)
    {
        printf("%d ",f[count]);
    }
    printf("\n");
    return;
}

void compare_number(int *pf, int *qf)
{
    int t;
    if(*pf<*qf)
    {
        t=*pf;
        *pf=*qf;
        *qf=t;
    }
}