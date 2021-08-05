#include<iostream>
#define N 1000
#define L 10
int main()
{
    struct Queue
    {
        int data[N];
        int head;
        int tail;
    };
    struct Stack
    {
        int data[L];
        int top;
    };
    int book[L]={0};
    Queue q1,q2;
    Stack sta;
    q1.head=q1.tail=0;
    q2.head=q2.tail=0;
    sta.top=0;
    for(int i=0;i<6;i++)
    {
        std::cin>>q1.data[i];
        q1.tail++;
    }
    for(int i=0;i<6;i++)
    {
        std::cin>>q2.data[i];
        q2.tail++;
    }
    while(q1.head<q1.tail&&q2.head<q2.tail)
    {
        int t=q1.data[q1.head];
        if(book[t]==0)
        {
            q1.head++;
            sta.top++;
            sta.data[sta.top]=t;
            book[t]=1;
        }
        else
        {
            q1.head++;
            q1.data[q1.tail]=t;
            q1.tail++;
            while(sta.data[sta.top]!=t)
            {
                book[sta.data[sta.top]]=0;
                q1.data[q1.tail]=sta.data[sta.top];
                q1.tail++;
                sta.top--;
            }
        }
        t=q2.data[q2.head];
        if(book[t]==0)
        {
            q2.head++;
            sta.top++;
            sta.data[sta.top]=t;
            book[t]=1;
        }
        else
        {
            q2.head++;
            q2.data[q2.tail]=t;
            q2.tail++;
            while(sta.data[sta.top]!=t)
            {
                book[sta.data[sta.top]]=0;
                q2.data[q2.tail]=sta.data[sta.top];
                sta.top--;
                q2.tail++;
            }
        }
    }
    if(q1.head==q1.tail)
    {
        std::cout<<"A win"<<std::endl;
        std::cout<<"B has:";
        for(int i=q2.head;i<q2.tail;i++)
        {
            std::cout<<' '<<q2.data[i];
        }
        std::cout<<std::endl;
        if(sta.top>0)
        {
            for(int i=1;i<=sta.top;i++)
            {
                std::cout<<sta.data[i]<<' ';
            }
        }
        else
        {
            std::cout<<"There is no card in the table";
        }
    }
    if(q2.head==q2.tail)
    {
        std::cout<<"B win"<<std::endl;
        std::cout<<"A has:";
        for(int i=q1.head;i<q1.tail;i++)
        {
            std::cout<<' '<<q1.data[i];
        }
        std::cout<<std::endl;
        if(sta.top>0)
        {
            for(int i=1;i<=sta.top;i++)
            {
                std::cout<<sta.data[i]<<' ';
            }
        }
        else
        {
            std::cout<<"There is no card in the table";
        }
    }
    return 0;
}