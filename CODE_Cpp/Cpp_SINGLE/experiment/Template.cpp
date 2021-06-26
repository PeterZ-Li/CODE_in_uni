#include<iostream>

template<typename T>
int f(T x)
{
    return 0;
}

int f(int y)
{
    return 1;
}

int main()
{
    int n=3;
    float m=1.0;
    std::cout<<f(n)<<' '<<f(m);//which is easier, use which one
    return 0;
}