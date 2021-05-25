#include<iostream>
#include<string>

//can use stoi() instead. creat another string to get p by string += string1 which can extend the string
int CreatP(std::string str,std::string dstr)
{
    std::string p="0";// construct p with "0" can reduce the risk if there is no p, so it can return number 0. Otherwise, stoi() can not return anything
    for(int i=0;i<(int)str.length();i++)
    {
        if(str[i]==dstr[0])
        {
            p+=dstr;
        }
    }
    return std::stoi(p,nullptr);
}

int main()
{
    std::string A,DA,B,DB;
    std::cin>>A>>DA>>B>>DB;
    int PA=CreatP(A,DA);
    int PB=CreatP(B,DB);
    std::cout<<PA+PB<<std::endl;
    return 0;
}