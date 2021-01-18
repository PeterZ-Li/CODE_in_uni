#include<stdio.h>

int main()
{
    int num2;
    enum NUM
    {
        zero,first,second
    }num1;
    scanf("%d%d",&num1,&num2);
    printf("%d,%d",num1,num2);
    return 0;
}