#include<iostream>
#include<string>

int main()
{
    std::string A;
    int B,divisor,outcome,remainder=0;
    std::cin>>A>>B;
    outcome=(A[0]-'0')/B;
    remainder=(A[0]-'0')%B;
    if(outcome!=0||(int)A.length()==1)//if A is single, and outcome is zero, need to output 0. use || can shorten the code
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