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
        for(int i=0;i<(int)s.size();i++)
        {
            sum+=stoi(s.substr(i,1));
        }
        return sum;
    }
    void print(int n)
    {
        string piny[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
        string ssum=to_string(n);
        for(int i=0;i<(int)ssum.size();i++)
        {
            if(i!=0)
            {
                cout<<" ";
            }
            cout<<piny[ssum[i]-'0'];
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