// #include<iostream>
// using namespace std;
// class rect
// {  
//     public:
//     int b=10 ,h=5;
//     // void set(int i , int j)
//     // {
//     //     this->b=i;
//     //     this->h=j;
//     // }
//     void area()
//     {
//         cout<<"Area Of Rectangle: "<<b*h<<endl;
//     }
// };
// class triangle:public rect
// {
//     public:
//     void area()
//     {
//         cout<<"Area of triangle: "<<(0.5*b*h)<<endl;
//     }
// };
// int main()
// {
//     triangle tri;
//     rect *p=&tri;
//     p->area();   
//     return 0;
// }


#include<iostream>
using namespace std;
class demo
{
    public:
    int x;
    demo(int i=0)
    {
        this->x=i;
    }
    demo operator++();
    void display()
    {
        cout<<"Value is : "<<x<<endl;
    }
};
demo demo::operator++()
{
    demo obj;
    obj.x=++x;
}
int main()
{
    demo o1(10);
    ++o1;
    cout<<o1.x<<endl;
 return 0;
}