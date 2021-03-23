#include<stdio.h>

#define MOD 100000

int main()
{
    float a=0.00000;
    int n,m;
    for(;;)
    {
        scanf("%d %d",&n,&m);
        if(n==0&&m==0)
        {
            break;
        }
        else
        {
            for(int i=m-n;i>=0;i--)
            {
                a+=1/(float)((n+i)*(n+i)%MOD);//输入的数较大时该怎么办？
            }
        }
        printf("%.5f\n",a);
    }
    return 0;
}