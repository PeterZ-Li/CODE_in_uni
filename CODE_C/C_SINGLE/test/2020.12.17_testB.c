#include<stdio.h>
#include<string.h>

#define N 501

int mystrstr(char a[],char b[]);

int main(void)
{
    char source_string[N],substring[N];
    int index;
    gets(source_string);
    gets(substring);
    index=mystrstr(source_string,substring);
    if(index!=-1)
    {
        printf("%d",index);
    }
    else
    {
        printf("-1");
    }
    
    return 0;
}

int mystrstr(char a[],char b[])
{
    int i=0,j=0,len1,len2,num;
    len1=strlen(a);
    len2=strlen(b);
    if(len1>=len2)
    {
        for(;i<=len1-len2;i++)
        {
            num=0;
            for(;j<=len2-1;j++)
            {
                if(a[i+j]==b[j])
                {
                    num++;
                }
                else
                {
                    j=0;
                    break;
                }    
                if(num==len2)
                {
                    return i;
                }
            }
        }
    }
    return -1;
}