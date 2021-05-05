#include<iostream>
#include<string>
#include<vector>

class Derivation
{
    private:
    std::string polynomial;
    std::vector<int> coefficient;
    public:
    Derivation(std::string pol):polynomial(pol)//get the coefficient
    {

    }
    void derivate()//multiply the variables in vector and output with blank space
    {

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