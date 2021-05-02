#include<iostream>
#include<vector>
#define N 105

class Container
{
    private:
    std::vector<int> array;
    int movement;
    public:
    Container(int a[],int n,int m)//get the array vector, need the legth of the array
    {
        movement=m;
        for(int i=0;i<n;i++)
        {
            array.push_back(a[i]);
        }
    }
    void show()//cout the right order of the array after shifting
    {
        for(int i=(int)array.size()-movement;i!=(int)array.size();i++)
        {
            std::cout<<array[i]<<" ";
        }
        for(int i=0;i<(int)array.size()-movement;i++)
        {
            if(i<(int)array.size()-movement-1)
            {
                std::cout<<array[i]<<" ";
            }
            else
            {
                std::cout<<array[i];
            }
        }
    }
};

int main()
{
    int a[N], n,m;
    std::cin>>n;
    std::cin>>m;
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    Container array(a,n,m);
    array.show();
    return 0;
}