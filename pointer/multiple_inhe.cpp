#include<iostream>
using namespace std;
//derived class derived from more than one base class
// means we have two base classes which inherits by single derived class
class A
{
    public:
    int x;
    void set_x(int xv)
    {
        x=xv;
    }
};
class B
{
    public:
    int y;
    void set_y(int vy)
    {
        y=vy;
    }
};
class result:public A ,public B
{
    public:
    void sum()
    {
        cout<<"X: "<<x<<endl;
        cout<<"Y: "<<y<<endl;
        cout<<"x+y: "<<x+y<<endl;
    }
    void prod()
    {
        cout<<"X: "<<x<<endl;
        cout<<"Y: "<<y<<endl;
        cout<<"x*y: "<<x*y<<endl;
    }
};
int main()
{
    result obj;
    obj.set_x(10);
    obj.set_y(20);
    obj.sum();
    obj.prod();

return 0;
}