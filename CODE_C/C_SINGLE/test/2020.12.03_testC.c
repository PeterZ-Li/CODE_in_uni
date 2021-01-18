#include<stdio.h>

#define N 21

int main(void)
{
    int a[N][N]={[0][0]=1,[1][0]=1,[1][1]=1}, n/*,j=1,t=0*/;
    for(int i=2;i<=19;i++)
    {
        a[i][i]=1;
        a[i][0]=1;
        for(int j=1;j<=i-1;j++)//可直接int变量，在出了循环后就消失，相当于没有来过
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
        //j=1;
    }
    scanf("%d",&n);
    if(n>0&&n<=20) 
    {
        for(int k=0;k<=n-1;k++)
        {
            for(int t=0;t<=k;t++)
            {
                printf("%d,",a[k][t]);
            }
            printf("\n");
            //t=0;
        }
    }    
    else 
    {
        printf("Input Error");
    }
}