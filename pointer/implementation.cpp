#include<iostream>
using namespace std;
//constructor
/*4types
1)default constructor
2)Parameterise constructor
3)copy constructor
4)default parameterise constructor
*/
class test
{
    int x;
    public:
    test()//default constructor
    {
        x=0;
    }
    test(int val)//parametrise constructor
    {
        x=val;
    }
    test(test &obj)//copy constructor
    {
        x=obj.x;//entered the value in x
    }
    // test(int xv=5)
    // {
    //     x=xv;
    // }
    void display()
    {
        cout<<"Value: "<<x<<endl;
    }
};
int main()
{
    test obj1(10) ;
    obj1.display();
    test n(obj1);//new object is created as copy of existing object
    n.display();
 return 0;
}