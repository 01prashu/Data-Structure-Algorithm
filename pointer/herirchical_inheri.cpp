#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    void set_x(int xv)
    {
        x=xv;
    }
};
class B:public A
{
    public:
    int y;
    void set_y(int yv)
    {
        y=yv;
    }
};
class C:public B
{
    public:
    int z;
    void set_z(int zv)
    {
        z=zv;
    }
};
class D:public C{
    public:
    int res;
    void display()
    {
        res=x+y+z;
        cout<<"Result"<<endl;
        cout<<res<<endl;
    }
};
int main()
{
    D obj;
    obj.set_x(10);
    obj.set_y(20);
    obj.set_z(30);
    obj.display();
    return 0;
}