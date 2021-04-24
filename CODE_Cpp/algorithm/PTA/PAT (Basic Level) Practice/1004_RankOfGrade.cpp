#include<iostream>
#define N 15
using namespace std;

class Table
{
    private:
    /*int num;
    char *na,*id;
    char name[num][N],id[num][N];const如何定义数组长度？不用const，用new加指针
    int *gra;*/
    int num;
    struct GradeTable
    {
        char name;
        char StuID;
        int grade;
    };
    public:
    Table(int n):num(n)
    {
        //const int &num=n;
        GradeTable gt[num];
        for(int i=0;i<=num-1;i++)
        {
            cin>>gt[i].name;
            cin>>gt[i].StuID;
            cin>>gt[i].grade;
        }
        MaxAndMin(gt);
    }
    void MaxAndMin(GradeTable a[])
    {
        int max=a[0].grade,min=a[0].grade,maxn=0,minn=0;
        for(int i=0;i<=num-1;i++)
        {
            if(a[i].grade>max)
            {
                max=a[i].grade;
                maxn=i;
            }
            if(a[i].grade<min)
            {
                min=a[i].grade;
                minn=i;
            }
        }
        cout<<a[maxn].name<<' '<<a[maxn].StuID<<endl;
        cout<<a[minn].name<<' '<<a[minn].StuID<<endl;        
    }
};

int main()
{
    int n;
    cin>>n;
    Table table(n);
}