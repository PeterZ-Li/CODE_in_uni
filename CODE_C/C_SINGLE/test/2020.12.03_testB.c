#include<stdio.h>
#include<string.h>
#define N 100

char normal_change(char x);
char abnormal_change(char y);

int main()
{
    int i,len;
    char a[N];
    gets(a);
    len=strlen(a);
    for(i=0;i<=len-1;i++)
    {
        if(a[i]>=65&&a[i]<=86)
        a[i]=normal_change(a[i]);
        else if(a[i]>=87&&a[i]<=90)
        a[i]=abnormal_change(a[i]);
        else if(a[i]>=97&&a[i]<=118)
        a[i]=normal_change(a[i]);
        else if(a[i]>=119&&a[i]<=122)
        a[i]=abnormal_change(a[i]);
    }
    puts(a);
    return 0;
}
char normal_change(char x)
{
    return x+=4;
}
char abnormal_change(char y)
{
    return y-=22;
}
