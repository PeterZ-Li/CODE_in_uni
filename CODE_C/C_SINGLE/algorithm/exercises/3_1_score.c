#include<stdio.h>
#include<string.h>
#define N 85

int main()
{
    int n,point=0,count=1,len;
    char a[N];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(a);
        len=strlen(a);
        for(int i=0;i<len;i++)
        {
            if(a[i]=='O')
            {
                point+=count++;
            }
            else
            {
                count=1;
            }
        }
        printf("%d\n",point);
        count=1;
        point=0;
    }
    return 0;
}