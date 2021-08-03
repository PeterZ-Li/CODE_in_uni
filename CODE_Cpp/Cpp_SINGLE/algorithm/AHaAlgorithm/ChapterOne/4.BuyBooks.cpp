#include<iostream>

int n,*isbn=new int[n];

void BubbleSort();

int main()
{
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cin>>isbn[i];
    }
    BubbleSort();
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(isbn[i]==isbn[i+1])
        {
            isbn[i+1]=0;
            count++;
        }
    }
    std::cout<<n-count<<std::endl;
    for(int i=0;i<n;i++)
    {
        if(isbn[i]==0)
        {
            continue;
        }
        std::cout<<isbn[i]<<' ';
    }
    delete[] isbn;
    return 0;
}

void BubbleSort()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(isbn[j]>isbn[j+1])
            {
                int temp=isbn[j];
                isbn[j]=isbn[j+1];
                isbn[j+1]=temp;
            }
        }
    }
}