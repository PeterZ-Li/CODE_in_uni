#include<iostream>
#define N 15
using namespace std;

class Table
{
    private:
    char name[num][N],id[num][N];//const如何定义数组长度？
    int grade[num];
    public:
    Table(int n)
    {
        const int &num=n;
    }
    void MaxAndMin()
    {

    }
};

int main()
{
    int n;
    cin>>n;
    Table(n);
}