#include<stdio.h>
#include<string.h>

#define N 100

int main()
{
    char S[N];
    int T,i,a=0,b=0,c=0,len;
    scanf("%d",&T);
    getchar();
    while(T--)
    {
        gets(S);
        len=strlen(S);
        for(i=0;i<len;i++)
        {
            //for(j=i+1;j<len;j++)
            {
                if(S[i]=='A')//&&S[i]==S[j])
                {
                    a++;
                }
                else if(S[i]=='B')//&&S[i]==S[j])
                {
                    b++;
                }
                else if(S[i]=='C')//&&S[i]==S[j])
                {
                    c++;
                }
            }
        }
        if(a==b+c||b==a+c||c==a+b)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}