#include<iostream>
using namespace std;
//Overriding member function
/*Create two function one is in base class and other is in derived class
with same function name ,return type and same arguments these are methods overariding in inheritance*/
class A
{
    public:
    int a;
    int b;
    void set_a(int av , int bv)
    {
        a=av;
        b=bv;
    }
    void print_msg()
    {
        int c=a+b;
        cout<<"Result Printing from class A(a+b):"<<c<<endl;
    }
};
class B:public A{
    public:
    void print_msg()
    {
        int c=a-b;
        cout<<"Result printing from class B(a-b):"<<c<<endl;
    }
};
int main()
{
    A obj1;
    B obj2;
    obj1.set_a(100 ,10);
    obj1.print_msg();
    obj2.set_a(100 ,20);
    obj2.print_msg();
 return 0;
}