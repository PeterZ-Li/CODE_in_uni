#include<stdio.h>

#define N 16

int main(void)
{
    int n, i=0, j=0,a[N][N]={{1}};
    scanf("%d",&n);
    if(n==1)
    {
        printf("%-5d",a[0][0]);
    }
    else
    {
        while(a[i][j+1]==0)
        {
            while(a[i][j+1]==0&&j+1<n)
            {
                j++;
                a[i][j]=a[i][j-1]+1;
            }
            while(a[i+1][j]==0&&i+1<n)
            {
                i++;
                a[i][j]=a[i-1][j]+1;
            }
            while(a[i][j-1]==0&&j-1>=0)
            {
                j--;
                a[i][j]=a[i][j+1]+1;
            }
            while(a[i-1][j]==0&&i-1>=0)
            {
                i--;
                a[i][j]=a[i+1][j]+1;
            }
        }
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=n-1;j++)
            {
                printf("%-5d",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}