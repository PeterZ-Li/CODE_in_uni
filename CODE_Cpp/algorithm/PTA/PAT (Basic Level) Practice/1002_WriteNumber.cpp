#include<iostream>
#include<string>

using namespace std;
class WriteNumber
{
    //private:
    //string str;
    public:
    WriteNumber()
    {
    }
    ~WriteNumber()
    {
    }
    int sum(string s)
    {
        int sum=0;
        for(int i=0;i<(int)s.size();i++)//size()返回无符号数，要强制类型转换
        {
            sum+=stoi(s.substr(i,1));//转化为int，但为什么不能是 stoi(s[i])？
        }
        return sum;
    }
    void print(int n)
    {
        string piny[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};//利用数组，可以不用switch，且string是char*，指向字符串
        string ssum=to_string(n);//数字转换成string
        for(int i=0;i<(int)ssum.size();i++)
        {
            if(i!=0)
            {
                cout<<" ";
            }
            cout<<piny[ssum[i]-'0'];//'0'是ASCII的数字最低，可将字符串型数字与之相减得到数字
        }
    }
};

int main()
{
    string s;
    int n;
    cin>>s;
    WriteNumber wn;
    n=wn.sum(s);
    wn.print(n);
    return 0;
}