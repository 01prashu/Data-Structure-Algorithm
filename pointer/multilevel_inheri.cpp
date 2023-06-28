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
    void set_y(int vy)
    {
        y=vy;
    }

};
class C:public B{
    public:
    int z;
    void set_z(int zv)
    {

        z=zv;
    }
    void display_xyz()
    {
        cout<<"X: "<<x<<endl;
        cout<<"Y: "<<y<<endl;
        cout<<"Z: "<<z<<endl;
    }
};
int main()
{
    C obj1;
    obj1.set_x(10);
    obj1.set_y(20);
    obj1.set_z(30);
    obj1.display_xyz();
 return 0;
}