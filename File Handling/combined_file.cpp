#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    char data[80];
    ifstream in_obj;
    in_obj.open("first.txt");

    ofstream out_obj;
    out_obj.open("combine.txt");
    while(in_obj)
    {
        in_obj.getline(data , 80);
        out_obj<<data<<endl;
    }
    cout<<"Data of first file inserted in combined file sucssesfully"<<endl;
    in_obj.close();

    in_obj.open("second.txt");
    while(in_obj)
    {
        in_obj.getline(data , 80);
        out_obj<<data<<endl;
    }
    cout<<"Second file data inserted succesfully"<<endl;
    in_obj.close();
    out_obj.close();
    
    ifstream cp;
    cp.open("combine.txt");
    while(cp)
    {
        cp.getline(data ,80);
        cout<<data<<endl;
    }
 return 0;
}