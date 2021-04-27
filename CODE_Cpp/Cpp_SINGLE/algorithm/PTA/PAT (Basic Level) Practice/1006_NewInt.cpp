#include<iostream>

class NewInt
{
    private:
    int num;
    public:
    NewInt(int n):num(n)
    {
    }
    void show();
};
int main()
{
    int n;
    std::cin>>n;
    NewInt ni(n);
    ni.show();
    return 0;
}