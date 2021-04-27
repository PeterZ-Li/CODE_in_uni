#include<iostream>

class NewInt
{
    private:
    int num;
    public:
    NewInt(int n):num(n)
    {
    }
    void show()
    {
        int g,s,b;
        g=num%10;
        s=num/10%10;
        b=num/100;
        for(int i=0;i<b;i++)
        {
            std::cout<<"B";
        }
        for(int i=0;i<s;i++)
        {
            std::cout<<"S";
        }
        for(int i=0;i<g;i++)
        {
            std::cout<<i+1;
        }                
    }
};
int main()
{
    int n;
    std::cin>>n;
    NewInt ni(n);
    ni.show();
    return 0;
}