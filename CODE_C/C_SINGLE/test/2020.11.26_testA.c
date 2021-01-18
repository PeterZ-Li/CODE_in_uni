#include<stdio.h>
#include<string.h>

#define N 100

int main()
{
    int i,len;
    char a[N];
    gets(a);
    len=strlen(a);
    for(i=0;i<=len-1;i++)
    {
        if(a[i]>='a'&&a[i]<='z') 
        {
            a[i]=a[i]-32;
            printf("%c",a[i]);
        }
        else if(a[i]>='A'&&a[i]<='Z') 
        {
            a[i]=a[i]+32;
            printf("%c",a[i]);
        }
        else 
        {
            printf("^_^");
        }
    }
    printf("\n");
    return 0;
}