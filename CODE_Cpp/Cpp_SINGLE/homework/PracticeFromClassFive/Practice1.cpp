#include<iostream>

class Assistent
{
    public:
    Assistent()
    {}
    void AskWeather()
    {
        std::cout<<"Is it raining?"<<" (You can input Y/N)"<<std::endl;
        char judge;
        std::cin>>judge;
        while(!(std::cin.good()))
        {
            std::cout<<"Your input is wrong, please input again"<<std::endl;
            std::cin.clear();
            while(std::cin.get()!='\n')
            {
                continue;
            }
        }
        if(judge=='Y')
        {
            std::cout<<"It is raining now!"<<std::endl;
        }
        else if(judge=='N')
        {
            std::cout<<"It is not raining now!"<<std::endl;
        }
        else
        {
            std::cout<<"Your input is wrong, please input again"<<std::endl;
        }
    }
    void AskMark()
    {
        int mark;
        std::cout<<"What's your test mark?"<<std::endl;
        std::cin>>mark;
        while(!(std::cin.good()))
        {
            std::cout<<"Your input is wrong, please input again"<<std::endl;
            std::cin.clear();
            while(std::cin.get()!='\n')
            {
                continue;
            }
        }
        if(mark>100||mark<0)
        {
            std::cout<<"Your input is wrong, please input again"<<std::endl;
        }
        switch((int)mark/10)
        {
            case 10:std::cout<<"A"<<std::endl;break;
            case 9:std::cout<<"A"<<std::endl;break;
		    case 8:std::cout<<"B"<<std::endl;break;
		    case 7:std::cout<<"C"<<std::endl;break;
		    case 6:std::cout<<"C"<<std::endl;break;
		    default:std::cout<<"D"<<std::endl;break;
        }
    }
};
int main()
{
    Assistent cortana;
    cortana.AskWeather();
    cortana.AskMark();
    //system("pause");
    return 0;
}