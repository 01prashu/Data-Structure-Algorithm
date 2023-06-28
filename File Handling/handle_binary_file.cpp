#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out_obj;
    int a[5]={10 , 20 , 30 , 40 , 50};
    int b[5];
    out_obj.open("input.dat");
    out_obj.write((char*)&a , sizeof(a));//we written array's value in the input.dat file
    out_obj.close();

    ifstream in_obj;
    in_obj.open("input.dat");
    in_obj.read((char*)&b , sizeof(b));
    in_obj.close();

    cout<<"We enterd values in array b"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
    
 return 0;
}