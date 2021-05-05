#include<iostream>
#include<string>
#include<sstream>

int main()
{
    //std::string str;
    //getline(std::cin,str);
    int i=2,j=-i;
    //std::stringstream(str)>>i;
    std::cout<<i<<std::endl;
    //std::stringstream(str[1])>>j;can not use a sigle variable as a stream
    std::cout<<j<<std::endl;
    return 0;
}