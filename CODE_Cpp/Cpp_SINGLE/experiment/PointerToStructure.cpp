#include<iostream>

struct A
{
    int A1,A2,A3;
}a;
int main()
{
    A *p=&a;
    p->A1=1;
    p++;
    (*p).A1=2;//so pointer++ can not point to another member in structure 
    return 0;
}