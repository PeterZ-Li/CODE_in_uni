#include<iostream>
#include<string>

int CreatP(std::string str,std::string dstr)
{
    int count=0,num=dstr[0]-'0';
    for(int i=0;i<(int)str.length();i++)
    {
        if(str[i]==dstr[0])
        {
            count++;
        }
    }
    int p,base=1;
    while(count--)
    {
        p=base*num;
        base*=10;
    }
    return p;
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