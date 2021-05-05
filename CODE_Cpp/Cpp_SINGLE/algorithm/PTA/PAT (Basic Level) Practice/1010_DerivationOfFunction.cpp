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
                i=polynomial[it]-'0';
                coefficient.push_back(i);
            }
        }
    }
    void derivate()//multiply the variables in vector and output with blank space
    {
        for(int i=0;i<(int)coefficient.size();i+=2)
        {
            if(i!=(int)coefficient.size()-2)
            {
                std::cout<<coefficient[i]*coefficient[i+1]<<' ';
            }
            else
            {
                std::cout<<coefficient[i]*coefficient[i+1];
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