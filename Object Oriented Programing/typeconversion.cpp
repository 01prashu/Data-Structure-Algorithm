#include<iostream>
using namespace std;
class demo
{
    public:
    int x;
    demo(int v=0)
    {
        this->x=v;
        cout<<"value is: "<<x<<endl;
    }
};
int main()
{
    // demo d1(10);
    demo d;
    d=10;
    return 0;
}