#include<iostream>
using namespace std;

//unary operator overloading of minus
class base
{
    
    public:
    int x;
    int y;
    // base()
    // {
    //     x=0;
    //     y=0;
    // }
    base(int i=0 , int j=0)
    {
        this->x=i;
        this->y=j;
    }
   
    base operator-();//unary operator declared as member function so it does not take any argument
};
//now we have to define unary operator
// function prototype then class name :: function name 
base base::operator-()
{
    this->x = -x;
    this->y = -y;
    return *this;
}
int main()
{
    base obj1(10 ,12);
    int x , y;
    obj1=-obj1;
    cout<<obj1.x<<endl;
    cout<<obj1.y<<endl;
    return 0;
}