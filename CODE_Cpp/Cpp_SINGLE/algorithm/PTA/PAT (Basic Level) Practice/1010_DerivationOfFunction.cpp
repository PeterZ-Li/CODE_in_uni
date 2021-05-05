#include<iostream>
#include<string>
//#include<sstream> for a single element in the string, we can not let it as a stream
#include<vector>

class Derivation
{
    private:
    std::string polynomial;
    std::vector<int> coefficient;
    public:
    Derivation(std::string pol):polynomial(pol)//get the coefficient
    {
        for(int it=0;it<(int)polynomial.size();it++)
        {
            int i;
            if(polynomial[it]!=' ')
            {
                if(polynomial[it]=='-')//deal with negtive number
                {
                    it++;
                    i=polynomial[it]-'0';
                    i=-i;
                    coefficient.push_back(i);
                }
                else
                {
                    i=polynomial[it]-'0';
                    coefficient.push_back(i);
                }
            }
        }
    }
    void derivate()//multiply the variables in vector and output with blank space
    {
        if(coefficient[0]*coefficient[1]==0)
        {
            std::cout<<"0 0";
        }
        else
        {
            std::cout<<coefficient[0]*coefficient[1]<<' '<<coefficient[1]-1;
            for(int i=2;i<(int)coefficient.size();i+=2)
            {
                if(coefficient[i]*coefficient[i+1]!=0)
                {
                    std::cout<<" "<<coefficient[i]*coefficient[i+1]<<" "<<coefficient[i+1]-1;
                }
                else
                {
                    break;
                }
            }
        }
    }
};
int main()
{
    std::string pol;
    getline(std::cin,pol);
    Derivation der(pol);
    der.derivate();
    return 0;
}