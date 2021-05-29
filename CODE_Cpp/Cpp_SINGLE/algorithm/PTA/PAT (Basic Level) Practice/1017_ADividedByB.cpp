#include<iostream>
#include<string>

int main()
{
    std::string A;
    int B,divisor,dividend,outcome,remainder;
    std::cin>>A>>B;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]-'0'>=B)
        {
            outcome=(A[i]-'0')/B;
            std::cout<<outcome;
            remainder=(A[i]-'0')%B;
        }
        else
        {
            divisor=(A[i]-'0')*10+(A[i+1]-'0');
            i++;
            std::cout<<divisor/B;
            remainder=divisor%B;
        }
    }
}