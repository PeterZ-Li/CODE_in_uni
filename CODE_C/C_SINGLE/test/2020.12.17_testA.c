#include<stdio.h>

#define N 900

int main(void)
{
    int a[N]={101}, hundred_digit, ten_digit, single_digit, i, sum;
    for(i=1;i<N-1;i++)
    {
        a[i]=a[i-1]+1;
    }
    for(i=0;i<N-1;i++)
    {
        hundred_digit=a[i]/100;
        ten_digit=(a[i]/10)%10;
        single_digit=a[i]%10;
        sum=hundred_digit*hundred_digit*hundred_digit+ten_digit*ten_digit*ten_digit+single_digit*single_digit*single_digit;
        if(sum==a[i])
        {
            printf("%d\n",a[i]);
        }
    }
}