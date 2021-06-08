#include<iostream>
#include<iomanip>

class Time
{
    private:
    int hour,minute,second;
    public:
    Time()
    {
        hour=minute=second=0;
    }
    Time(int a,int b,int c):hour(a),minute(b),second(c)
    {}
    void show()
    {
        std::cout<<std::setfill('0');
        std::cout<<std::setw(2)<<std::right<<hour<<":";
        std::cout<<std::setw(2)<<std::right<<minute<<":";
        std::cout<<std::setw(2)<<std::right<<second<<std::endl;
    }
};
int main()
{
    Time timenow(21,3,1);
    timenow.show();
    return 0;
}