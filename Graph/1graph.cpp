#include <iostream>
#include<unordered_map>
#include <list>
using namespace std;
class graph{
    public:
    unordered_map<int , list<int>>adjacentList;
    void addnode(int u , int v, bool direction)
    {
        // if direction = 0 --undirected
        // if direction = 1 --directed
        adjacentList[u].push_back(v);
        if(direction == 0)
        {
            adjacentList[v].push_back(u);
        }
    }
    void printList()
    {
        for(auto i:adjacentList)
        {
            cout<<i.first<<"->";
            for(auto j:i.second)
            {
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};

int main()
{
    graph g;
    int n , m;
    cout<<"Enter number of node in graph"<<endl;
    cin>>n;
    cout<<"Enter number of edge in graph"<<endl;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int u ,v ;
        cin>>u>>v;
        g.addnode(u ,v ,0);
    }
    g.printList();
    return 0;
}
