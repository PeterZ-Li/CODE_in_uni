#include<stdio.h>
#include<string.h>

#define n 10

int main()
{
    char a[n];
    int len;
    gets(a);
    len=strlen(a);
    for(int i=0;i<len;i++)
    {
        switch (a[i])
        {
        case 'C':  printf("12.01\n");//常量表达式可为ASCII
            break;
        case 'H':  printf("1.008\n");
            break;    
        
        default:  printf("no\n");
            break;
        }
    }
    return 0;
}