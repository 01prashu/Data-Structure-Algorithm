#include<iostream>
using namespace std;
class base
{
    int x=8;
    public:
    int z=12;
    void display()
    {
        cout<<"base class x:"<<x<<endl;
    }
};
class derieved:public base
{
    int y=10;
    public:
    virtual void display()
    {
        cout<<"Derieved class value: "<<y<<endl;
    }
};
int main()
{
   
    base *ptr ,b;
    derieved *dptr ,d;
    dptr=&d;
    cout<<dptr->z<<endl;
    dptr->display();
    return 0;
}