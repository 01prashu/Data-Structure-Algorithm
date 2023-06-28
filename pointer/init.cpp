#include<iostream>
using namespace std;
int main()
{
    // int num;
    // cout<<"Enter How Many Number You have to store"<<endl;
    // cin>>num;
    // int *ptr=new int[num];

    // for(int i=0;i<num;i++)
    // {
    //     cout<<"Enter value: "<<endl;
    //     cin>>ptr[i];
    // }

    // for(int i=0;i<num;i++)
    // {
    //     cout<<ptr[i]<<" ";
    // }
    // delete ptr;

    int *ptr=new int[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter value:"<<endl;
        cin>>ptr[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<ptr[i]<<" ";
    }
    delete ptr;
 return 0;
}