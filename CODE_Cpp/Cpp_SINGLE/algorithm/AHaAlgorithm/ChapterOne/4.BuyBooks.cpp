#include<iostream>

int n,*isbn=new int[n];

int BubbleSort();

int main()
{
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cin>>isbn[n];
    }
    int k=BubbleSort();
    std::cout<<k<<std::endl;
    for(int i=0;i<n;i++)
    {
        if(isbn[n]==0)
        {
            continue;
        }
        std::cout<<isbn[n]<<' ';
    }
    delete[] isbn;
    return 0;
}

int BubbleSort()
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(isbn[i]==0)
        {
            continue;
        }
        for(int j=i+1;j<n;j++)
        {
            if(isbn[j]==0)
            {
                continue;
            }
            if(isbn[i]>isbn[j])
            {
                int tem=isbn[i];
                isbn[i]=isbn[j];
                isbn[j]=tem;
            }
            else if(isbn[i]==isbn[j])
            {
                isbn[j]=0;
                count++;
            }
        }
    }
    return n-count;
}