// Sum of N number using recursion
#include <iostream>
using namespace std;
int SumOfNnumber(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+SumOfNnumber(n-1);
    }
}
int main()
{
    int n=10;
    cout<<SumOfNnumber(n);
    return 0;
}