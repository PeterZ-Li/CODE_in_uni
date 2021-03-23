#include<stdio.h>

int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
        for(i=10;i<101;i++)
        {
            if((i-a)%3==0&&(i-b)%5==0&&(i-c)%7==0)
            {
                printf("%d\n",i);
                break;
            }
            
        }
        if(i==101)//若要表示循环结束后，内部语句未实现，则利用循环控制变量来验证
        {
            printf("No answer\n");
        }
    }
    return 0;
}