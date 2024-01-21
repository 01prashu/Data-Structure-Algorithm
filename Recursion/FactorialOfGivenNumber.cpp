// Find factorial of given number using recursion
#include<iostream>
using namespace std;
float factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter Given Number "<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<" is:" <<factorial(n);
    return 0;
}