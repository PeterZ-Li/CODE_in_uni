#include<stdio.h>

int main(void)
{
    int n;
    char a;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        scanf("%c",&a);
        getchar();
        if(a>='0'&&a<='9') printf("number\n");
        else if((a>='a'&&a<='z')||(a>='A'&&a<='Z')) printf("letter\n");
        else printf("else\n");
    }
    return 0;
}