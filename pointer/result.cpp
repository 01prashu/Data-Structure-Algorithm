#include<iostream>
// #include "test.h"
using namespace std;
// inline int mul(int x , int y)
// {
//     return x*y;
// }
class base
{
    int x;
    public:
    void set_data(int xv)
    {
        x=xv;
    }
    void display_x()
    {
        cout<<"X: "<<x<<endl;
    }
};
class derived:public base
{
    int y;
    public:
    void set_y(int vy)
    {
        y=vy;
    }
    void display_y()
    {
        cout<<"y: "<<y<<endl;
    }
};

int main()
{
    int m , n;
    derived obj1;
    cout<<"Enter value for x: "<<endl;
    cin>>m;
    cout<<"Enter value for y: "<<endl;
    cin>>n;
    obj1.set_data(m);
    obj1.set_y(n);
    obj1.display_x();
    obj1.display_y();
    // sum s;
    // cout<<mul(5,5);
    // s.set_data(10 ,20);
    // cout<<s.addition()<<endl;
 return 0;
}