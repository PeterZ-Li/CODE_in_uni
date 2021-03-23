#include<stdio.h>
#include<string.h>

#define N 1000001

int main()
{
    char a[N],b[N];
    long long int count=0,len1,len2,i,j,k;
    gets(a);
    gets(b);
    len1=strlen(a);
    len2=strlen(b);
    for(i=0;i<len1;i++)
    {
        if(a[i]==b[0])
        {
            j=i+1;
            for(k=1;k<len2;k++)
            {
                if(a[j]==b[k])
                {
                    j++;
                }
                else
                {
                    break;
                }
            }
            if(k>=len2)
            {
                count+=1;
            }
        }
    }
    printf("%lld",count);
    return 0;
}