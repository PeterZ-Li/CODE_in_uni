#include<stdio.h>

int main(void)
{
    int a,b;
    char c;
    scanf("%d%d",&a,&b);//未被scanf读取的就被放在了缓存区。“”里面的指scanf能读取的东西，所以在输入enter后，enter被放在缓存区       
    scanf("%c",&c);    //下一个scanf最先读取的就是上一个scanf剩下没读取的，而刚好这个scanf能够读取enter，所以，c被赋值为enter的值 
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%c",c);
    //return 0;
    char a[10];             //数组同理，scanf只读取“”内的指定内容
    for(int i=0;i<=9;i++)
    {
        scanf("%c",&a[i]);
    }
    for(int j=0;j<=9;j++)
    {
        printf("%c",a[j]);
    }
    return 0;
}