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
class B:public A//single inheritance
{
    public:
    int y;
    void set_y(int yv)
    {
        y=yv;
    }
};
class C
{
    public:
    int z;
    void set_z(int zv)
    {
        z=zv;
    }
};
class D:public B,public C//Multiple inheritance 
{
    public:
    int res;
    void display()
    {
        cout<<"Result"<<endl;
        res=x+y +z;
        cout<<"X:"<<x<<" "<<"Y:"<<y<<" "<<"Z:"<<z<<endl;
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