#include<iostream>
using namespace std;
class base
{
    public:
    int x;
    void set_x(int xv)
    {
        x=xv;
    }
    void display_x()
    {
        cout<<"Base Class"<<endl;
        cout<<"x: "<<x<<endl;
    }

};
class derived:public base
{
    public:
    int y;
    void set_y(int vy)
    {
        y=vy;
    }
    void display_xy()
    {
        cout<<"Derived class"<<endl;
        cout<<"X: "<<x<<endl;
        cout<<"Y: "<<y<<endl;
    }
};
int main()
{
    derived obj1;
    obj1.set_x(10);
    obj1.display_x();
    obj1.set_y(20);
    obj1.display_xy();

 return 0;
}