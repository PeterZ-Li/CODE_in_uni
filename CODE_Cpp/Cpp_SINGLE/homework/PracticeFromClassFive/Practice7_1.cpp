#include<fstream>
#include<iostream>
#include<string>

int main()
{
    std::ifstream in;
    in.open("Practice7_1.txt",std::ios::in);
    if(in)
    {
        std::string fstr;
        in>>fstr;//try to think that "in" is an object which let its element input to a string 
        int num;
        for(int i=0;i<(int)fstr.length();i++)
        {
            if((fstr[i]>='a'&&fstr[i]<='z')||(fstr[i]>='A'&&fstr[i]<='Z'))
            {
                num++;
            }
        }
        std::cout<<num<<std::endl;
    }
    return 0;
}