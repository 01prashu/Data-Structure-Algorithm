#include<iostream>
#include <map>
using namespace std;
int main()
{
    map<int , char>mp;
    int key;
    char c;

    mp.insert(pair<int , char> (1 ,'A'));
    mp.insert(pair<int , char>(20 ,'B'));
    mp.insert(pair<int , char>(30 ,'C'));
    mp.insert(pair<int , char >(40 ,'D'));


    map<int ,char>::iterator it;
    for(it=mp.begin();it !=mp.end();it++)
    {
        cout<<(*it).first<<" , "<<(*it).second<<endl;
    }

    cout<<"Delete key"<<endl;
    mp.erase(1);
    for(it=mp.begin();it !=mp.end();it++)
    {
        cout<<(*it).first<<" , "<<(*it).second<<endl;
    }
 return 0;
}