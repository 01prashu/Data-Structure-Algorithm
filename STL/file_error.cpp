#include<iostream>
using namespace std;
int main()
{
    int value;
    cout<<"Enter value"<<endl;
    cin>>value;
    if(cin.good()==0)
    {
        cout<<"Incorrect Input"<<endl;
    }
    else
    {
        cout<<"Correct input"<<endl;
    }
 return 0;
}