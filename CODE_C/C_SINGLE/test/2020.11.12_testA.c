#include<stdio.h>

int main()
{
    int I, b;
    float c;
    scanf("%d", &I);
    if(0<I&&I<=100000) b=1;
    if(100000<I&&I<=200000) b=2;
    if(200000<I&&I<=400000) b=3;
    if(400000<I&&I<=600000) b=4;
    if(600000<I&&I<=1000000) b=5;
    if(1000000<I) b=6;
    switch (b)
    {
    case 1:
        c=I*0.1;
        break;
    case 2:
        c=(I-100000)*0.075+100000*0.1;
        break;
    case 3:
        c=(I-200000)*0.05+100000*0.175;
        break;
    case 4:
        c=(I-400000)*0.03+100000*0.225;
        break;
    case 5:
        c=(I-600000)*0.015+100000*0.255;
        break;
    case 6:
        c=(I-1000000)*0.01+100000*0.27;
        break;    
    default:
        break;
    }
    printf("%.2f", c);
    return 0;
}