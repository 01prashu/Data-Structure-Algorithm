#include<iostream>
using namespace std;
class opration
{
    public:
    // int x , y;
    // opration(int i=0 , int j=0)
    // {
    //     this->x=i;
    //     this->y=j;
    // }
    virtual void fun()=0;
};
class add:public opration
{
    public:
    // add(int x , int y):opration(x ,y){};
    // void fun()
    // {
    //     cout<<"Add Value: "<<x+y<<endl;
    // }
    void fun()
    {
        cout<<"Hii am from class add"<<endl;
    }

};
class prod:public opration
{
    public:
    // prod(int x , int y):opration(x ,y){}
    // void fun()
    // {
    //     cout<<"Product Values: "<<x*y<<endl;
    // }
    void fun()
    {
        cout<<"i am from prod class"<<endl;
    }
};
int main()
{
    opration *ptr;
    // opration obj1(10,5);
    // add obj2(10,20);
    // prod obj3(4,6);
    // // ptr=&obj1;
    // // ptr->fun();
    // ptr=&obj2;
    // ptr->fun();
    // ptr=&obj3;
    // ptr->fun();
    
    // opration obj1;
    // add obj2;
    // prod obj3;
    // ptr=&obj1;
    // ptr->fun();
    // ptr=&obj2;
    // ptr->fun();
    // ptr=&obj3;
    // ptr->fun();
    return 0;
}
