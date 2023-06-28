#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream obj_first;
    obj_first.open("first.txt" ,ios::trunc);
    obj_first<<"Prashant"<<endl;
    obj_first<<"Pranav"<<endl;
    obj_first<<"Pratik"<<endl;
    obj_first<<"pavan"<<endl;
    obj_first.close();

    ofstream obj_second;
    obj_second.open("second.txt");
    obj_second<<"Sambhajinar"<<endl;
    obj_second<<"Akola"<<endl;
    obj_second<<"Buldhana"<<endl;
    obj_second<<"Latur"<<endl;
    obj_second.close();


    ifstream read_first;
    read_first.open("first.txt");
    char data[80];
    while(read_first)
    {
        read_first.getline(data , 80);
        cout<<data<<endl;
    }
    return 0;
}