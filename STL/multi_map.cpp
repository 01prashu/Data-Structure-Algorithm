#include<iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int ,char >mmp;

    mmp.insert(pair<int , char>(10 ,'A'));
    mmp.insert(pair<int , char>(20 ,'B'));
    mmp.insert(pair<int , char>(30 ,'C'));
    mmp.insert(pair<int , char>(30 ,'E'));
    mmp.insert(pair<int , char>(30 ,'f'));
    mmp.insert(pair<int , char>(30,'G'));

    //range of function is used to find unique key and multiple value


    multimap<int , char>::iterator it;
    for(it=mmp.begin();it != mmp.end();it++)
    {
        cout<<(*it).first<<" -- "<<(*it).second<<endl;
    }

    //search element in multimap
    int k;
    cout<<"Enter value of key you have to search"<<endl;
    cin>>k;
    for(it=mmp.equal_range(k).first; it !=mmp.equal_range(k).second;it++)
    {
        cout<<(*it).first<<" -- "<<(*it).second<<endl;
    }


    mmp.erase(30);
    
    for(it=mmp.begin() ; it !=mmp.end() ; it++)
    {
        cout<<(*it).first<<" --- "<<(*it).second<<endl;
    }
 return 0;
}