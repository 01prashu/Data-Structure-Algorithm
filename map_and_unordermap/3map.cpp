#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    map<char , int>mp;
    cout<<"Enter name"<<endl;
    cin>>name;
    for(int i=0;i<name.length();i++)
    {
        mp[name[i]]++;
    }

    for(auto p:mp)
    {
        cout<<p.first<<" "<<p.second<<" "<<endl;
    }
    
    return 0;
}