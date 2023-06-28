#include<iostream>
#include <set>
using namespace std;
int main()
{
    // set is a container that contain unique element in some specific order ..we can perform various operation on set as insertion  , deletion , display etc
    // searching perticular element and so on 
    // various function perform on set as insert(value) , erase(value) , return size() , find(value) 

    set<int>s1;

    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    s1.erase(20);
    set<int>::iterator it;
    for(it=s1.begin();it != s1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s1.size()<<endl;

    //find element in set
    it=s1.find(20);
    if(it !=s1.end())
    {
        cout<<*it<<" Element is present"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
 return 0;
}