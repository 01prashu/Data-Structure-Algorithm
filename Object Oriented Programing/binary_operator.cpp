#include<iostream>
using namespace std;
class fruitbasket
{
    public:
    int mango , apple;
    fruitbasket(int i=0 , int j=0)
    {
        this->apple=i;
        this->mango=j;
    }
    fruitbasket operator+(fruitbasket);
    void display()
    {
        cout<<"Mango: "<<this->mango<<" + "<<"Apple: "<<this->apple<<endl;
    }
};
fruitbasket fruitbasket ::operator+(fruitbasket obj)
{
    // this->apple=this->apple + obj.apple;
    // this->mango=this->mango + obj.mango;
    // return *this;
    fruitbasket res;
    res.apple=apple+obj.apple;
    res.mango=mango+obj.mango;
    return res;
}
int main()
{
    fruitbasket obj1(10 ,20) ,obj2(5,10) , res;
    obj1.display();
    obj2.display();
    res=obj1 + obj2;
    cout<<"Total Apple: "<<res.apple<<endl;
    cout<<"Total Mango: "<<res.mango<<endl;
    
 return 0;
}