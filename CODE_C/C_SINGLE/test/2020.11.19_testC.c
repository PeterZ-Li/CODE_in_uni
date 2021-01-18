#include<stdio.h>
#include<string.h>
#define N 101

int main()
{
    int i, s, n, curlen=0, maxlen;
    char a[N], b[N], c[N];
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        gets(a);
        for(i=0;i<=100;i++)
        {
            if((a[i]>'a'&&a[i]<'z')||(a[i]>'A'&&a[i]<'Z'))
            {
                curlen++;
            }
            else if(a[i]==' ')
            {
                if(curlen!=0)
                {
                    if(curlen<maxlen)
                    {
                        curlen=0;
                    }
                    else if(curlen==maxlen)
                    {
                        for(s=0;curlen>0;curlen--,s++)
                        {
                            b[s]=a[i-curlen];
                        }
                        strcat(c,",");
                        strcat(c,b);
                    }
                    else
                    {
                        maxlen=curlen;
                        for(s=0;curlen>0;curlen--,s++)
                        {
                            b[s]=a[i-curlen];
                        }
                        strcpy(c,b);
                    }
                }
                else
                {
                    break;
                }
                
            }
            else
            {
                printf("Input Error\n");
                break;
            }
            
        }
        puts(c);
    }
    return 0;
}