#include<stdio.h>
#include<string.h>

#define n 20
float Molar(char *b);//用指针代替数组进入函数会方便许多

int main()
{
    int len;
    float mass=0,molar;
    char a[n],*p=a;
    gets(a);
    len=strlen(a);
    for(;p<&a[len];p++)//指针运算
    {
        if((molar=Molar(p)))//先赋值后判断，注意要加括号
        {
            if(*(p+1)>='0'&&*(p+1)<='9')
            {
                mass+=molar*(*(p+1)-48);
                p++;
            }
            else
            {
                mass+=molar;
            }
        }
    }
    printf("%.3fg/mol",mass);
    return 0;
}

float Molar(char *b)
{
    switch (*b)//不可用一整个数组及浮点数
    {
        case 'C':  return 12.01;//可为ASCII
        break;
        case 'H':  return 1.008;//字符串无法通过define直接转换成想要的数字，应该只能用switch
        break;
        case 'O':  return 16.00;
        break;
        case 'N':  return 14.01;
        break;
        default:  return 0;
        break;
    }
}