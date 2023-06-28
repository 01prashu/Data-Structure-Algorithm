#include<iostream>
#include <vector>
#include <queue>
using namespace std;
// class unary_increment
// {
//     int x;
//     public:
//     unary_increment(int xv=0)
//     {
//         x=xv;
//     }
//     friend unary_increment operator+(unary_increment &);
//     void display()
//     {
//         cout<<"x = "<<x<<endl;
//     }
// };
// unary_increment operator+(unary_increment & obj1)
// {
//     unary_increment obj2;
//     obj2.x=obj1.x+1;
//     return obj2;

// }
int main()
{
//     unary_increment o(5);
//     unary_increment o2;
//    o2=+o;
//    o2.display()
    queue<int>q;
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    int size=q.size();
    int arr[size];
    int i=0;
    while( !q.empty())
    {
        int t=q.front();
        q.pop();
        arr[i]=t;
        i++;
    }
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=0 , num=3-1;
    while(k<=num)
    {
        swap(arr[k] , arr[num]);
        k++;
        num--;
    }  
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}