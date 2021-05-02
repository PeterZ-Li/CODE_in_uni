#include<iostream>
#include<vector>
#define N 105

class Container
{
    private:
    std::vector<int> array;
    public:
    Container(int a[N])//get the array vector
    {
        
    }
    void show()//cout the right order of the array after shifting
    {

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
    Container array(a);
    array.show();
    return 0;
}