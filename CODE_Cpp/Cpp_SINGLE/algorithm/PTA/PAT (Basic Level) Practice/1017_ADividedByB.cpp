#include<iostream>
#include<string>

int main()
{
    std::string A;
    int B,divisor,outcome,remainder=0;
    std::cin>>A>>B;
    outcome=(A[0]-'0')/B;
    remainder=(A[0]-'0')%B;
    if(outcome!=0)
    {
        std::cout<<outcome;
    }
    for(int i=1;i<(int)A.length();i++)
    {
        divisor=remainder*10+(A[i]-'0');
        outcome=divisor/B;
        std::cout<<outcome;
        if(outcome==0&&remainder==B)
        {
            remainder=0;
        }
        else
        {
            remainder=divisor%B;
        }
    }
    std::cout<<" "<<remainder;
    return 0;
}