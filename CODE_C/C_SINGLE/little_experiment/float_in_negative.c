#include<stdio.h>

int main()
{
    float num;
    int positive=0,negative=0,zero=0;
    for(int i=1;i<=3;i++)
    {
        scanf("%f",&num);//float也可用于整数，只是为了准确最好不要，计算机需要准确
        if(num==0)
        {
            zero++;
        }
        else if(num<0)
        {
            negative++;
        }
        else
        {
            positive++;
        }
    }
    printf("negative_num:%d zero_num:%d positive_num:%d",negative,zero,positive);
    return 0;
}