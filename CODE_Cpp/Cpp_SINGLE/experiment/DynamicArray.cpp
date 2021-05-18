#include<iostream>
#include<new>

int main()
{
    int n;
    std::cin>>n;//give the value to n first
    int *p=new int[n];//use () but not []? *p始终指向第0个元素
    for(int i=0;i<n;i++)
    {
        std::cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        std::cout<<p[i]<<",";
    }
    return 0;
}