#include<stdio.h>
#include<string.h>

#define N 105

int main()
    {
        char a[N];
        int T,n,k,i,j;
        scanf("%d",&T);
        getchar();
        while(T--)
        {
            scanf("%d %d",&n,&k);
            getchar();
            for(i=0;i<=n;i++)
            {
                scanf("%c",&a[i]);
            }
            if(n%2==0)
            {
                if(k<n/2)
                {
                    for(j=0;j<(n-2)/2;j++)
                    {
                        if(a[j]!=a[n-j-1])
                        {
                            printf("NO\n");
                            break;
                        }
                    }
                    if(j>=(n-2)/2)
                    {
                        printf("YES\n");
                    }
                    continue;
                }
                else
                {
                    printf("NO\n");
                }
            }
            else if(n%2==1)
            {
                for(j=0;j<(n-1)/2;j++)
                {
                    if(a[j]!=a[n-j-1])
                    {
                        printf("NO\n");
                        break;
                    }
                }
                if(j>=(n-1)/2)
                {
                    printf("YES\n");
                }
                continue;
            }
        }
        return 0;
    }
