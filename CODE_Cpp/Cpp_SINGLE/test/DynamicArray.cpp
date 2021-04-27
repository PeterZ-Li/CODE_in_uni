#include<iostream>
#include<new>

int main()
{
    int n;
    int *p=new int(n);//use () but not []? *p始终指向第0个元素
    std::cin>>n;
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