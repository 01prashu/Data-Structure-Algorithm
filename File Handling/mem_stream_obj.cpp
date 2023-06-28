#include<iostream>
#include<iomanip>
#include <strstream>
const int size=30;
using namespace std;
int main()
{
    int rollno=20;
    char name[]="Prashant";
    char data[size];
    ostrstream mem_obj(data , size);
    mem_obj<<"Name : "<<name
    <<setw(10)
    <<"Roll No: "<<rollno
    <<"\0";
    cout<<data<<endl;
    return 0;
}