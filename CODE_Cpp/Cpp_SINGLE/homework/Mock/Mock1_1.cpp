#include<iostream>

template<class Type>
Type Abs(Type a)
{
    return a<0?(-a):a;
}

int main()
{
    int num1=1;
    float num2=-3.2;
    double num3=2.45;
    std::cout<<Abs(num1)<<std::endl;
    std::cout<<Abs(num2)<<std::endl;
    std::cout<<Abs(num3)<<std::endl;
    return 0;
}