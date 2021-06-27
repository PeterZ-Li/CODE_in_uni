#include<iostream>

class TypeChange
{
    private:
    int n;
    public:
    //TypeChange()=default;
    TypeChange(int num=0):n(num)
    {}
    ~TypeChange()
    {}
    operator int() const
    {
        return n;
    }
};

int main()
{
    TypeChange tp1,tp2(2);
    std::cout<<tp1<<' '<<tp2;
    return 0;
}