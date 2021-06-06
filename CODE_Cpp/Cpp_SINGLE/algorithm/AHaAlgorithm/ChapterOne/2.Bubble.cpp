#include<iostream>
#include<vector>

int main()
{
    int n,num;
    std::vector<int> NumList;
    std::cin>>n;
    while(n--)
    {
        std::cin>>num;
        NumList.push_back(num);
    }
    n=NumList.size();
    for(int i=0;i<n-1;i++)//control the number of times in sequencing.
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(NumList[j]<NumList[j+1])
            {
                std::swap(NumList[j],NumList[j+1]);
            }
        }
    }
    std::vector<int>::iterator it=NumList.begin();
    for(;it!=NumList.end();it++)
    {
        std::cout<<*it<<" ";
    }
    return 0;
}