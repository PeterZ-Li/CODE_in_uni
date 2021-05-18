#include<iostream>

class A
{
    private:
    int n;
    public:
    A(int a):n(a)//不可自己给自己赋值，如A(int a):n(n)
    {
        std::cout<<"creaat:"<<n<<std::endl;
    }
};
int main()
{
    A test(2);
    return 0;
}