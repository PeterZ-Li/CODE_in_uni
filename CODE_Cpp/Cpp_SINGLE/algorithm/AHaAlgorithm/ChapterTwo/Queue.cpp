#include<iostream>
#define N 101

struct queue
{
    int head=0;
    int tail=9;
    int List[N]={6,3,1,7,5,8,9,2,4};
};
int main()
{
    queue q;
    while(q.head<q.tail)
    {
        std::cout<<q.List[q.head];
        q.head++;
        q.List[q.tail]=q.List[q.head];
        q.tail++;
        q.head++;
    }
    return 0;
}