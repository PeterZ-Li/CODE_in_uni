#include<iostream>
#include<string>
using namespace std;

class Character
{
    private:
    string str;
    public:
    Character(string s):str(s)
    {
    }
    bool isPTA()
    {
        for(int i=0;i<(int)str.size();i++)//别忘了size的强制类型转换
        {
            if(str[i]!='P'||str[i]!='T'||str[i]!='A')
            {
                cout<<"NO"<<endl;
                return false;
            }
        }
        return true;
    }
};
class RightAnswer
{
    private:
    int fir,sec,tri;
    public:
    RightAnswer()
    {
        string s;
        cin >> s;
        Character cha(s);
        if(cha.isPTA())
        {
            for(int i=0;i<(int)s.size();i++)
            {
                if(s[i]=='P')
                {
                    fir=i;
                }
                else if(s[i]=='T')
                {
                    sec=i-1-fir;
                    tri=s.size()-i;
                    break;
                }
            }
        }
        relation();
    }
    void relation()
    {
        if(sec==0)
        {
            cout<<"NO"<<endl;
        }
        else if(sec==1)
        {
            if(fir==tri)
            {
                cout<<"YES"<<endl;
            }
            else
            {
            cout<<"NO"<<endl;
            }
        }
        else if(sec>1)
        {
            if(tri==(fir*sec))
            {
                cout<<"YES"<<endl;                
            }
            else
            {
                cout<<"NO"<<endl;                
            }
        }
    }
};

int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        RightAnswer AC();
    }
    return 0;
}