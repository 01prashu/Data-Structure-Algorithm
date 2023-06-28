#include<iostream>
using namespace std;

int multi(int a , int b)
{
    return a*b;
}
int main()
{
    // return_type(*ptr)(data type ,....)

    int (*fptr)(int , int);//declaraction of function pointer

    fptr=multi;// fptr is point to multi function
    cout<<"Result: "<<fptr(15 ,2)<<endl;
 return 0;
}