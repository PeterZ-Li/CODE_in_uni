#include<stdio.h>

#define N 101

int main(void)
{
    int row, col,a[N][N]={0},i,j;
    scanf("%d %d",&row,&col);
    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=col-1;j++)
        {
            scanf("%d",&a[i][j]);
            getchar();
        }
        j=0;
    }
    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=col-1;j++)
        {
            printf("%d",a[i][j]);
            printf(" ");
        }
        j=0;
        printf("\n");
    }
    i=0;
    j=0;
    printf("%d ",a[i][j]);
    a[i][j]=0;
    while(a[i+1][j]!=0)
    {
        while (a[i+1][j]!=0&&i+1<row)/*while(a[i+i][j]!=0&&i+1<row)多打了个i*/
        {
            i++;
            printf("%d",a[i][j]);
            a[i][j]=0;
            printf(" ");
        }
        while(a[i][j+1]!=0&&j+1<col)
        {
            j++;
            printf("%d",a[i][j]);
            a[i][j]=0;
            printf(" ");
        }
        while(a[i-1][j]!=0&&i-1>=0)
        {
            i--;
            printf("%d",a[i][j]);
            a[i][j]=0;
            printf(" ");
        }
        while(a[i][j-1]!=0&&j-1>=0)
        {
            j--;
            printf("%d",a[i][j]);
            a[i][j]=0;
            printf(" ");
        }
    }
    return 0;
}