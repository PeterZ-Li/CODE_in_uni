//如何不用数组？
#include<stdio.h>

int main()
{
    int a,b,c,i,j,d[10];
    for(a=123;a<=329;a++)
    {
        b=a*2;
        c=a*3;
        //如何用指针？
        d[0]=a/100;
        d[1]=a/10%10;
        d[2]=a%10;
        d[3]=b/100;
        d[4]=b/10%10;
        d[5]=b%10;
        d[6]=c/100;
        d[7]=c/10%10;
        d[8]=c%10;
        for(i=0;i<=8;i++)
        {
            if(d[i]==0)
            {
                break;
            }
            for(j=i+1;j<=8;j++)//非二维数组，而是比较，用j=i+1
            {
                if(d[i]==d[j])
                {
                    break;
                }
            }
            if(j<=8)
            {
                break;
            }
        }
        if(i==9&&j==9)
        {
            printf("%d %d %d\n",a,b,c);
        }
    }
    return 0;
}