#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>=2)
    {
        printf("%d",((1+n)*n)/2);
    }   
    else
    {
        printf("%d",n);
    }
    return 0;
}