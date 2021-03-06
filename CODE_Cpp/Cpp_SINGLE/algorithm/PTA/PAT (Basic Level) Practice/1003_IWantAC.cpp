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
    bool isPAT()
    {
        for(int i=0;i<(int)str.size();i++)//别忘了size的强制类型转换
        {
            if(str[i]!='P'&&str[i]!='T'&&str[i]!='A')
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
    int fir=-1,sec,tri;
    public:
    RightAnswer()
    {
        string s;
        cin >> s;
        Character cha(s);
        if(cha.isPAT())
        {
            for(int i=0;i<(int)s.size();i++)
            {
                if(s[i]=='P')
                {
                    fir=i;
                }
                else if(s[i]=='T'&&fir!=-1)//PAT的顺序控制
                {
                    sec=i-1-fir;
                    if(s[i+1]=='\0')
                    {
                        tri=i-1-sec-fir;
                    }
                }
                else if(s[i+1]=='\0')
                {
                    tri=i-1-sec-fir;
                }
            }
            relation();
        }
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
        RightAnswer AC;
    }
    return 0;
}