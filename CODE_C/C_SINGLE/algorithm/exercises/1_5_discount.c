#include<stdio.h>

int main()
{
    int n;
    float sum;
    scanf("%d",&n);
    if((sum=95*n)>=300)
    {
        printf("%.2f",0.85*sum);//保留小数用float
    }
    else
    {
        printf("%.2f",sum);
    }
    return 0;
}