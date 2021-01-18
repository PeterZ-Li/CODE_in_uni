#include<stdio.h>
#include<string.h>

int judge(int a[]);

#define N 16

int main()
{
    int b[N],c[N],d[N],e[N],n,count=0;
    char ip[N];
    scanf("%d",&n);
    getchar();
    while(n-->0)
    {
        gets(ip);
        if(sscanf(ip,"%[0-9].%[0-9].%[0-9].%[0-9]",b,c,d,e))
        {
            count+=judge(b);
            count+=judge(c);
            count+=judge(d);
            count+=judge(e);
            if(count==4) printf("yes\n");
            else printf("no\n");
        }
        else printf("no\n");
    }        
}
int judge(int a[])
{
    int len;
    len=strlen(a);
    if(len>3)
    return 0;
    else if(a[len-2]>2) 
    return 0;
    else if(a[len-2]==2)
    {
        if(a[len-1]>5) 
        return 0;
        else if(a[len-1]==5)
        {
            if(a[len]>5) 
            return 0;
        }    
    }
    else return 1;
}