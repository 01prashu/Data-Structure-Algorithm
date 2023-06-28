#include<iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int>vect(3);
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(40);
    vect.push_front(10);
    vect.push_front(20);
    vect.pop_back();
    vect.pop_front();
    for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<endl;
    deque<int>::iterator itr;
    itr=vect.begin();
    cout<<*itr<<endl;
 return 0;
}