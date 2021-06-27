#include<iostream>

template<typename T>
int f(T x)
{
    return x;
}

double f(int y)
{
    return 1;
}

int main()
{
    int n=3;
    double m=1.11;
    std::cout<<f(n)<<' '<<f(m)<<' '<<(double)n<<' '<<sizeof(double)<<' '<<sizeof(int);//which is easier, use which one
    return 0;
}