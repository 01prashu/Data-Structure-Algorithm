#include<iostream>
using namespace std;
class concatenate
{
    public:
    string s1 ;
    concatenate(string s1=" ")
    {
        this->s1=s1;
       
    }
    // concatenate operator+(concatenate);
    concatenate friend operator+(concatenate , concatenate&obj);
    void display()
    {
        cout<<"Result:"<<s1<<endl;
        
    }
};
// concatenate concatenate::operator+(concatenate obj)
// {
//     concatenate res;
//     res.s1=s1+obj.s1;
//     return res;
// }
concatenate operator+(concatenate o1 , concatenate &obj)
{
    concatenate res;
    res.s1=o1.s1+obj.s1;
    return res;
}
int main()
{
    const int a=10;
    const int b=5;
    concatenate o1("Hello") , o2("CPP") , o3;
    o3=o1+o2;
    o3.display();
 return 0;
}