#include<iostream>
using namespace std;
class demo
{
    int y;
    static int z;
    public:
    static int fun()
    {
        z=0;
        cout<<z<<endl;
        z++;
        
    }
};
int main()
{
    demo obj1;
    for(int i=0;i<5;i++)
    {
        cout<<obj1.fun();
    }
 return 0;
}