#include<iostream>

int main()
{
    enum SEX
    {
        Female,
        Male,
    };
    SEX sex;
    //std::cin>>sex; enum can not be initialized
    std::cout<<sex;//output num, but not its element
    return 0;
}