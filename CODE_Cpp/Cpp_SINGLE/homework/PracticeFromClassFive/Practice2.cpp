#include<iostream>

#define pi 3.14
class Circle
{
    private:
    int r;
    public:
    Circle(int a):r(a)
    {}
    float circumference()
    {
        return 2*r*pi;
    }
    float area()
    {
        return pi*r*r;
    }
    void show()
    {
        float cir=circumference();
        float area1=area();
        std::cout<<"The circumference is "<<cir<<std::endl;
        std::cout<<"The area is "<<area1<<std::endl;
    }
};
int main()
{
    int R;
    std::cin>>R;
    Circle c1(R);
    c1.show();
    return 0;
}