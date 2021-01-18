#include<stdio.h>

int main(void)
{
    float a;
    a=1.23f;
    printf("%.10f\n",a);
    printf("%3d\n",1234);//不会因为“”内限定了长度就舍去数字位数，而是原样打印出来
    printf("\"%-10d\"",1234);
    return 0;
}