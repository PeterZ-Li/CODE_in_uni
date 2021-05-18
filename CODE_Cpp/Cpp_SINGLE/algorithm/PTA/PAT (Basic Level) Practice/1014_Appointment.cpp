#include<iostream>
#include<string>

#define N 4
/*struct Time
{
    std::string day;
    std::string hour;
};there is no need to use structure. can use some algorithm to let character to num */
//std::string day("MON","TUE","WED","THU","FRI","SAT","SUN");

int main()
{
    const char DAY[][N]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    std::string code[N];
    int i,counter=0;
    for(int j=0;j<N;j++)
    {
        std::getline(std::cin,code[j]);
    }
    for(i=0;code[1][i]!='\0'||code[0][i]!='\0';i++)
    {
        if(counter==0)
        {
            if(code[0][i]>='A'&&code[0][i]<='G'&&code[0][i]==code[1][i])
            {
                counter=1;
                std::cout<<DAY[code[0][i]-'A']<<" ";
                continue;
            }
        }
        else
        {
            if(code[0][i]==code[1][i])
            {
                if(code[0][i]>='0'&&code[0][i]<='9')
                {
                    std::cout<<code[0][i]-'0'+1<<":";
                    //break;
                }
                else if(code[0][i]>='a'&&code[0][i]<='n')
                {
                    std::cout<<code[0][i]-'a'+10<<":";
                    //break;
                }
                else if(code[0][i]>='A'&&code[0][i]<='N')
                {
                    std::cout<<code[0][i]-'A'+10<<":";//typewrite is wrong turn 'A' to 'a'
                    //break;
                }
                break;
            }
        }
    }
    for(i=0;code[2][i]!='\0'||code[3][i]!='\0';i++)
    {
        if(code[2][i]==code[3][i]&&((code[2][i]>='a'&&code[3][i]<='z')||(code[2][i]>='A'&&code[3][i]<='Z')))
        {
            if(i<=9)
            {
                std::cout<<0<<i;
            }
            else
            {
                std::cout<<i;
            }
            break;
        }
    }
    return 0;
}