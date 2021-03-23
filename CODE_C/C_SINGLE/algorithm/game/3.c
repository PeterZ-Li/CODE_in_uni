#include<stdio.h>
#include<string.h>

#define N 100005

int main()
{
    int n,i,j,k,b[10]={0};
    char a[N];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    getchar();
    for(j=0;j<n;j++)
    {
        if(a[j]=='L')
        {
            for(k=0;k<10;k++)
            {
                if(b[k]==0)
                {
                    b[k]=1;
                    break;
                }
            }
        }
        else if(a[j]=='R')
        {
            for(k=9;k>=0;k--)
            {
                if(b[k]==0)
                {
                    b[k]=1;
                    break;
                }
            }
        }
        else if(a[j]<='9'&&a[j]>='0')
        {
            b[a[j]-48]=0;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}