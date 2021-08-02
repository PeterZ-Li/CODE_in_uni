#include<iostream>

void QuickSort(int left, int right);
int n,num[20];
int main()
{
    //int n;
    std::cin>>n;
    //int *num= new int[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>num[i];
    }
    QuickSort(0,n-1);
    for(int i=0;i<n;i++)
    {
        std::cout<<num[i]<<' ';
    }
    return 0;
}

void QuickSort(int left, int right)
{
    int base, tem,i=left,j=right;
    base=num[left];
    if(left>right)
    {
        return;
    }
    while(left!=right)
    {
        while(num[right]>=base&&left<right)
        {
            right--;
        }
        while (num[left]<=base&&left<right)
        {
            left++;
        }
        if(left<right)
        {
            tem=num[left];
            num[left]=num[right];
            num[right]=tem;
        }
    }
    num[i]=num[left];
    num[left]=base;
    QuickSort(i,right-1);
    QuickSort(left+1,j);
}