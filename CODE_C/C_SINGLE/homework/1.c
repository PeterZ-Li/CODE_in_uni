#include<stdio.h>
#include<math.h>
int main (void)
{
    int a,b,c,t,p,s;
    printf("三角形的边长1：");
    scanf("%d",&a);
    printf("三角形的边长2：");
    scanf("%d",&b);
    printf("三角形的边长3：");
    scanf("%d",&c);
    if (a<b)
    {
    t=a;a=b;b=t;    /* code */
    }
    if (a<c)
    {
    t=a;a=c;c=t;    /* code */
    }
    if (b<c)
    {
    t=b;b=c;c=t;    /* code */
    }
    if (a-b<c)
    {
      p=(a+b+c)/2;
      s=sqrt(p*(p-a)*(p-b)*(p-c));
      printf("三角形的面积=%d",s) ; /* code */
    }
    else
    {
        printf("这三边无法构成三角形");
    }
    
    return 0;
    
    
    

}