#include<stdio.h>

int main()//没有注意循环安排的位置，逻辑没有先想好
{
    int n;
    scanf("%d",&n);
    for(int j=n;j>0;j--)//在写判定条件时好好想一想
    {
        int i=2*j-1;
        if(i<2*n-1)//图形前面有空格，利用差值打出前面的空格
            {
                int k=((2*n-1)-i)/2;
                for(;k>0;k--)
                {
                    printf(" ");
                }
            }
        for(;i>0;i--)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}