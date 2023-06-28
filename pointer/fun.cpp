#include<iostream>
using namespace std;
void sum(int *x,int *y)//function definition
{
int c;
c=*x+*y;
cout<<"The addition of two numbers is: "<<c;
}
int main()
{
int a,b;
void sum(int * , int*);//function declaration
cout<<"\n Enter The Two Numbers: ";
cin>>a;
cin>>b;
sum(&a,&b);//call to the function
return 0;
}
