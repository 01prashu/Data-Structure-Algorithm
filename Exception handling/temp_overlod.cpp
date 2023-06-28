#include<iostream>
using namespace std;
template <class T>
void display(T a)
{
    cout<<"Value of a in template function: "<<a<<endl;
}
void display(int a)
{
    cout<<"Value of a in overloded function: "<<a<<endl;
}
int main()
{
    display(10.24);
    display(4);
 return 0;
}