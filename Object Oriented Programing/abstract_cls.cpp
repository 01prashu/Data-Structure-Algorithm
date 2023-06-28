#include<iostream>
using namespace std;
class area
{
    public:
    int b , h;
    void set_value(int x , int y)
    {
        this->b=x;
        this->h=y;
    }
    virtual void display_area()=0;
};
class traingle:public area
{
    public:
    void display_area()
    {
        cout<<"Area of triangle is: "<<0.5*b*h<<endl;
    }

};
int main()
{
    traingle obj1;
    obj1.set_value(10 ,10);
    obj1.display_area();
 return 0;
}