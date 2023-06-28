#include<iostream>
using namespace std;
// logical & , logical ! , and logical ~ unary operator overloading
class base
{
    public:
    bool x , y;
    // base(bool i=0 , bool j=0)
    // {
    //     this->x=i;
    //     this->y=j;
    // }
    base(bool i=0,bool j=0)
    {
        this->x=i;
        this->y=j;
    }
    // base operator!();
    // base operator&();
    base operator~();
};
base base ::operator~()
{
    this->x=~x;
    this->y=~y;
    return *this;
}
// base base::operator!()
// {
//     this->x=!x;
//     this->y=!y;
//     return *this;
// }
// base base::operator&()
// {
//     this->x=x&x;
//     this->y=y&y;
//     return *this;
// }
int main()
{
    base b1(true ,false);
    // // b1=!b1;
    // b1=&b1;
    b1=~b1;
    cout<<b1.x<<endl;
    cout<<b1.y<<endl;
    return 0;
}