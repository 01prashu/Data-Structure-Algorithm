#include<iostream>
using namespace std;
int main(int argc , char *argv[])
{
    cout<<"Enter number of argument"<<endl;
    cin>>argc;
    for(int i=0;i<argc;i++)
    {
        cout<<"Argument "<<i<<" "<<argv[i]<<endl;
    }
 return 0;
}