#include<stdio.h>
int main()
{
    int c,q=1;
    while((c=getchar())!=EOF)//因为gets对字符串没有大小限制，且此处可以一个一个地输入来进行操作，所以用该语句。
    {
        if(c=='"')
        {
            printf("%s",q?"``":"''");
            q=!q;
        }
        else
        {
            printf("%c",c);
        }
    }
    return 0;
}