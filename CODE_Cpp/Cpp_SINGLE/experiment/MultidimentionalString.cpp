#include<iostream>
#include<string>

int main()
{
    std::string str[4];
    std::getline(std::cin,str[1]);
    std::getline(std::cin,str[2]);
    std::getline(std::cin,str[3]);
    //std::getline(std::cin,str[4]); start from 0
    std::cout<<str[2][1]<<std::endl<<str[2]<<std::endl<<str[3]<<std::endl;
}
