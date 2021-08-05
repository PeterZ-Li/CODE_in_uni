#include<iostream>
#include<string>

int main()
{
    std::string str,front;
    std::getline(std::cin,str);
    int len=str.length(),top=0;
    int mid=len/2-1,next;
    for(int i=0;i<=mid;i++)
    {
        front[++top]=str[i];
    }
    if(len%2==0)
    {
        next=mid+1;
    }
    else
    {
        next=mid+2;
    }
    for(int i=next;i<len;i++)
    {
        if(front[top]!=str[i])
        {
            break;
        }
        else
        {
            top--;
        }
    }
    if(top==0)
    {
        std::cout<<"YES";
    }
    else
    {
        std::cout<<"NO";
    }
    return 0;
}