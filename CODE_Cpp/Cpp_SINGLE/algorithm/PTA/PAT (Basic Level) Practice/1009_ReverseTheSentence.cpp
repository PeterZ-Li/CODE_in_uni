#include<iostream>
#include<string>
#define N 85

class Reverse
{
    private:
    std::string sentence;
    int position[N];
    public:
    Reverse(std::string s):sentence(s)//record the position of each words
    {
        
    }
    void show()//output the opposite of the sentence with the help of position
    {

    }
};
int main()
{
    std::string sen;
    std::getline(std::cin,sen);
    Reverse re(sen);
    re.show();
    return 0;
}