#include<iostream>
#include<string>

int main()
{
    std::string A;
    int B,divisor,outcome,remainder=0;
    std::cin>>A>>B;
    for(int i=0;i<A.length();i++)
    {
        divisor=remainder*10+(A[i]-'0');
        outcome=divisor/B;
        remainder=divisor%B;
        if(outcome==0)
        {
            continue;
        }
        else
        {
            std::cout<<outcome;
        }
    }
}