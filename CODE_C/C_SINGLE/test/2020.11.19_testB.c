#include<stdio.h>
#include<string.h>
#define A 101

int main()
{
    int n, i, len;
    char a[A];
    scanf("%d", &n);
    getchar();
    while(n>0)
    {
        gets(a);
        len=strlen(a);
        for(i=len;i>=0;i--)
        {
            if(a[i]>='a'&&a[i]<='z') printf("%c",a[i]);
        }
        printf("\n");
        n--;
    }
    return 0;
}