#include<iostream>
#include <list>
// Sequence container --1)Vector 2)dequeue 3)list
using namespace std;
int main()
{
    list <int>num;//create an empty list
    //inserting element in empty list
    int n , v;
    cout<<"How many Number which you want to insert ?"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>v;
        num.push_back(v);
    }

    list<int>::iterator it;
    it=num.end();
    //traversing from left to right
    while(it !=num.begin())
    {
        cout<<*it<<" ";
        it++;
    }
   
    //traversing from right to left
    cout<<endl;
    cout<<"Right to left traversing"<<endl;

    num.sort();
    it=num.begin();
    while(it != num.end())
    {
        cout<<*it<<" ";
        it++;
    }
 return 0;
}