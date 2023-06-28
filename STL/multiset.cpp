#include<iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int>ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);
    ms.insert(20);
    ms.insert(20);
    ms.insert(20);
    ms.insert(30);
    ms.insert(40);
    multiset<int>::iterator it;

    for(it=ms.begin();it != ms.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    
    for(it=ms.begin();it != ms.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
 return 0;
}