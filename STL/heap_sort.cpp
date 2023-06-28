#include<iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{

    // Max heap
    priority_queue<int , vector<int >>max_heap;
    max_heap.push(5);
    max_heap.push(-1);
    max_heap.push(3);
    max_heap.push(6);

    cout<<max_heap.top();

    priority_queue<int , vector<int> , greater<int>> min_heap;
    min_heap.push(12);
    min_heap.push(-2);
    min_heap.push(5);
    cout<<min_heap.top();
    
 return 0;
}