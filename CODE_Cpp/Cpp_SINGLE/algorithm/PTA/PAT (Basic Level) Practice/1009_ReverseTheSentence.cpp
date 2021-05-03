#include<iostream>
#include<string>
#define N 85

class Reverse
{
    private:
    std::string sentence;
    int position[N]={1};//base of position
    public:
    Reverse(std::string s):sentence(s)//record the position of each words
    {
        std::string::iterator it=sentence.begin();
        for(;it!=sentence.end();it++)
        {
            if(*it==' ')
            {
                position[std::distance(sentence.begin(),it+1)]=1;
            }
        }
    }
    void show()//output the opposite of the sentence with the help of position
    {
        for(int i=sentence.size();i>=0;i--)
        {
            if(position[i]==1)
            {
                int j=i;
                do
                {
                    std::cout<<sentence[j];
                    j++;
                }while(position[j+1]!=1);//use position as the condition
                if(i!=0)
                {
                    std::cout<<' ';
                }
            }
        }
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