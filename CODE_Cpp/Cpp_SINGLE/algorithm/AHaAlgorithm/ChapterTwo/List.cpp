#include<iostream>

struct node
{
    int data;
    node *next;
};

int main()
{
    node *head,*p,*q,*t;
    int n,a;
    head=nullptr;
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cin>>a;
        p=new node;
        p->data=a;
        p->next=nullptr;
        if(head==nullptr)
        {
            head=p;
        }
        else
        {
            q->next=p;
        }
        q=p;
        delete p;
    }
    std::cin>>a;
    t=head;
    while(t!=nullptr)
    {
        if(t->next->data>a)
        {
            p=new node;
            p->data=a;
            p->next=t->next;
            t->next=p;
            delete p;
            break;
        }
        t=t->next;
    }
    t=head;
    while(t!=nullptr)
    {
        std::cout<<t->data<<' ';
        t=t->next;
    }
    return 0;
}