#include<iostream>
using namespace std;
class demo
{
    public:
    int x , y;
    demo(int i=0 , int j=0)
    {
        this->x=i;
        this->y=j;
    }
    demo operator+(demo);
    demo operator/(demo);
    void display()
    {
        cout<<x<<" + "<<y<<"i"<<endl;
    }
};
demo demo::operator+(demo obj)
{
    demo res;
    res.x=this->x +obj.x;
    res.y=this->y + obj.y;
    return res;

}
demo demo::operator/(demo obj)
{
    demo res;
    res.x=(x *(obj.x)) + (y*(obj.y))/(x*x)+(y*y);
    res.y=((x*y)+(x*y))/(x*x)+(y*y);
    return res;
}
int main()
{
    demo d1(2,3) , d2(5 ,6),d3;
    d3=d2/d1;
    d3.display();
 return 0;
}