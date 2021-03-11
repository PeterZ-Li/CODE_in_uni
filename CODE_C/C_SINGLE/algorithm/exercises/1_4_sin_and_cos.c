#include<stdio.h>
#include<math.h>

#define pi 3.14
#define DEG (pi/180)

int main()
{
    int n;
    scanf("%d",&n);
    printf("%.2f,%.2f",sin(n*DEG),cos(n*DEG));
    return 0;
}