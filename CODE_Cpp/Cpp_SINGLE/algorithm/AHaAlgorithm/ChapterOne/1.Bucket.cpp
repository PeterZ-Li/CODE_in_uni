#include<iostream>
#define N 111

int main()
{
    int n,mark,sequence[N]={0};
    std::cin>>n;
    while (n--)
    {
        std::cin>>mark;
        sequence[mark]++;
    }
    for(int i=N-1;i>=0;i--)
    {
        if(sequence[i]!=0)
        {
            while(sequence[i]--)
            {
                std::cout<<i<<" ";
            }
        }
    }
    return 0;
}