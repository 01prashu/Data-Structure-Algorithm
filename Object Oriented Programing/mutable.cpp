// #include<iostream>
// using namespace std;
// class mut
// {
//     public:
//     mutable string name;
//     int r_no;
    
//     mut(string n , int r)
//     {
//         this->name=n;
//         this->r_no=r;
        
//     }
//     void display()
//     {
//         cout<<"Name is: "<<name<<endl;
//         cout<<"Roll number is: "<<r_no<<endl;
//     }
// };
// int main()
// {
//     const mut obj("Prashant" ,38);
//     obj.name="bharat";
//  return 0;
// }

#include<iostream>
using namespace std;
class A
{
    public:
    int a=50,b=30;
    // void get_value(int x , int y)
    // {
    //     this->a=x;
    //     this->b=y;
    // }
    void result()
    {
        cout<<"a+b: "<<a+b<<endl;
    }
};
class B:public A
{

    public:
    
    void result()
    {
        cout<<"a-b: "<<a-b<<endl;
    }
};
int main()
{
    B obj1;
    A obj2;
    obj2.result();
    obj1.result();
 return 0;
}