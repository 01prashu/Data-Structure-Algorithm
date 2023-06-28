// BFS in graph
#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
#include <vector>
#include <set>
using namespace std;
class graph{
    public:
    unordered_map<int ,list<int>>adjcentlist;
    void addelement(int u , int v , bool direction)
    {
        adjcentlist[u].push_back(v);
        if(direction == false)
        {
            adjcentlist[v].push_back(u);
        }
        
    }

};
#include <bits/stdc++.h> 
#include <set>
void preaparedlist(unordered_map<int , set<int>>&adjlist ,vector<pair<int , int>>edges)
{
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i].first;
        int v=edges[i].second;
        adjlist[u].insert(v);
        adjlist[v].insert(u);
    }
}
void bfs(unordered_map<int ,set<int>>&adj ,unordered_map<int , bool>&visited ,vector<int>&ans , int node)
{
    queue<int>q;
    q.push(node);
    visited[node]=true;
    while(!q.empty())
    {
        int frontnode=q.front();
        q.pop();
        ans.push_back(frontnode);
        for(auto i:adj[frontnode])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=true;
            }
        }
    }
}
vector<int>BFS(int vertex ,vector<pair<int ,int>>edges)
{
    unordered_map<int ,set<int>>adjacentlist;
    vector<int>ans;
    preaparedlist(adjacentlist ,edges);
    unordered_map<int , bool>visited;
    for(int i=0;i<vertex ;i++)
    {
        if(visited[i]==false)
        {
            bfs(adjacentlist ,visited , ans ,i);
        }
    }
    return ans;
}
int main()
{
    vector<int>ans;
    vector<pair<int , int>>edges;
    int vertex;
    cout<<"Enter number of vertex in graph"<<endl;
    cin>>vertex;
    int e;
    cout<<"Enter Number of edges in graph"<<endl;
    cin>>e;
    for(int i=0;i<e;i++)
    {
        int u ,v;
        cin>>u>>v;
        edges.push_back(make_pair(u,v));
    }
    ans=BFS(vertex ,edges);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}