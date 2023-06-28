#include<iostream>
#include <fstream>
using namespace std;
int main()
{

    // written in file
    ofstream out;
    out.open("first.txt");
    out<<"name is: prashant"<<endl;
    out.close();

    // read from file
    ifstream in;
    in.open("first.txt");
    char str[50];
    in.getline(str , 50);
    cout<<str;
    in.close();


    
 return 0;
}