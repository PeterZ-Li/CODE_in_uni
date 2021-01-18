#include<stdio.h>

#define NUM 8

int main(void)
{
    int a[NUM][NUM],b[NUM][NUM]={0},c[NUM][NUM],N,K;
    scanf("%d %d",&N,&K);
    getchar();
    for(int i=0;i<=N-1;i++)
    {
        for(int j=0;j<=N-1;j++)
        {
            scanf("%d",&a[i][j]);
            getchar();
            c[i][j]=a[i][j];
        }
    }
    for(int k=1;k<=K-1;k++)
    {
        for(int row=0;row<=N-1;row++)
        {
            for(int col=0;col<=N-1;col++)
            {
                for(int i=0;i<=N-1;i++)
                {
                    b[row][col]=b[row][col]+c[row][i]*a[i][col];
                }
            }
        }
        for(int i=0;i<=N-1;i++)
        {
            for(int j=0;j<=N-1;j++)
            {
                c[i][j]=b[i][j];
            }
        }
    }
    for(int i=0;i<=N-1;i++)
    {
        for(int j=0;j<=N-1;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}