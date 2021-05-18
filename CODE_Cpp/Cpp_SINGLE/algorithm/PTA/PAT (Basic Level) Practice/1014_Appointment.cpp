#include<iostream>
#include<string>
#include<vector>
#include<iomanip>//control the width

//#define N 4
/*struct Time
{
    std::string day;
    std::string hour;
};there is no need to use structure. can use some algorithm to let character to num */
//std::string day("MON","TUE","WED","THU","FRI","SAT","SUN");

int main()
{
    std::vector<std::string> DAY={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    std::string a,b,c,d;
    int i,counter=0;
    std::cin>>a>>b>>c>>d;//a string without ' ',so can use cin to input string to each variaty
    for(i=0;i<(int)a.length()&&i<(int)b.length();i++)
    {
        if(counter==0)
        {
            if(a[i]==b[i]&&(a[i]>='A'&&a[i]<='G'))
            {
                counter=1;
                std::cout<<DAY[a[i]-'A']<<" ";
                continue;
            }
        }
        else
        {//if there is the same element not within '0'to'9' and 'A' to 'N', it will be wrong
            if(a[i]==b[i]&&(a[i]>='0'&&a[i]<='9'))
            {
                std::cout<<std::setfill('0')<<std::setw(2)<<a[i]-'0'<<":";
                break;
            }
            /*else if(code[0][i]>='a'&&code[0][i]<='n')
            {
                std::cout<<code[0][i]-'a'+10<<":";
                //break;
            }*/
            else if(a[i]==b[i]&&(a[i]>='A'&&a[i]<='N'))
            {
                std::cout<<a[i]-'A'+10<<":";//typewrite is wrong turn 'A' to 'a'
                break;
            }
        }
    }
    for(i=0;i<(int)c.length()&&i<(int)d.length();i++)
    {
        if(c[i]==d[i]&&isalpha(c[i]))
        {
            std::cout<<std::setfill('0')<<std::setw(2)<<i;
            break;
        }
    }
    return 0;
}