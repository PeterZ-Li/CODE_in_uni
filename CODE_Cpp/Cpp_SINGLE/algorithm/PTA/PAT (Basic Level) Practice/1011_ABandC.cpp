#include<iostream>

class Inequality
{
    private:
    long int A,B,C;
    public:
    Inequality(long int a,long int b,long int c):A(a),B(b),C(c)
    {
    }
    void greater()//judge A+B>C?
    {
        if(A+B>C)
        {
            std::cout<<"true"<<std::endl;
        }
        else
        {
            std::cout<<"false"<<std::endl;
        }
    }
};
int main()
{
    long int A,B,C,n;
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        std::cin>>A>>B>>C;
        Inequality ine(A,B,C);
        std::cout<<"Case #"<<i<<": ";
        ine.greater();
    }
    return 0;
}