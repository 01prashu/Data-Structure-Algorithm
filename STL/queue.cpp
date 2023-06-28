#include<iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int>q;
    q.push(10);
    q.push(-2);
    q.push(8);
    q.push(6);
    q.push(5);
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
 return 0;
}