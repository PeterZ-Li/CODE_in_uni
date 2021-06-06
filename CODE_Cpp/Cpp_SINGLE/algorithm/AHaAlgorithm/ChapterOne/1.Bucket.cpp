#include<iostream>
#define N 111

int main()
{
    int n,mark,book[N]={0};
    std::cin>>n;
    while (n--)
    {
        std::cin>>mark;
        book[mark]++;
    }
    for(int i=N-1;i>=0;i--)
    {
        if(book[i]!=0)
        {
            while(book[i]--)
            {
                std::cout<<i<<" ";
            }
        }
    }
    return 0;
}