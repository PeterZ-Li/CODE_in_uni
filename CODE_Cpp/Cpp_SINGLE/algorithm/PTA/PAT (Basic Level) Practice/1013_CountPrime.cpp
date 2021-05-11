#include<iostream>

class Nature
{
    private:
    int low,high,num=2;
    public:
    Nature(int m,int n):low(m),high(n)
    {}
    void countprime()//count and control the whole progress
    {

    }
    bool isprime()//judge if it is prime
    {

    }
    void show()//output the prime by the rule
    {

    }
};
int main()
{
    int M,N;
    std::cin>>M>>N;
    Nature nat(M,N);
    nat.countprime();
    return 0;
}