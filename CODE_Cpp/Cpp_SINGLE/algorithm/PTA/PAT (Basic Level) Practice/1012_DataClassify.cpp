#include<iostream>

class Classification
{
    private:
    int N,n;//classify n one by one
    struct sort//use a struct to define A
    {
        int A1,A2,A3,A5;
        float A4;
    }A;
    public:
    Classification(int N):N(N)//need to classify n one by one, use classify()
    {

    }
    void classify()//classify a number from keyboard
    {
        return;
    }
    void show()//show the struct A
    {
        return;
    }
};
int main()
{
    int N;
    std::cin>>N;
    Classification cla(N);
    cla.classify();
    cla.show();
    return 0;
}