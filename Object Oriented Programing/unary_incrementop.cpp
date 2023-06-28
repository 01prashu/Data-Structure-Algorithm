// #include<iostream>
// using namespace std;

// //unary operator overloading of increment 
// class base
// {
//     public:
//     int x , y;
//     base(int i=0 , int j=0)
//     {
//         this->x=i;
//         this->y=j;
//     }
//     base operator++();
// };
// base base::operator++()
// {
//     base obj1;
//     obj1.x=++x;
//     obj1.y=++y;
//     return obj1;
//     // this->x=++x;
//     // this->y=++y;
//     // return *this;
// }
// int main()
// {
//     base b1(5 ,7);
//     b1=++b1;
//     cout<<b1.x<<endl;
//     cout<<b1.y<<endl;
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
        x=i;
    }
    demo friend operator++(demo &obj);
    void display()
    {
        cout<<"Value is: "<<x<<endl;
    }
    
};
demo operator++(demo &obj)
{
    demo res;
    res.x=++ obj.x;
    return res;
}
int main()
{
    demo o1(10);
    ++o1;
    ++o1;
    cout<<o1.x<<endl;
 return 0;
}