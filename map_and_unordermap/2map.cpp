// Int this program we are going to store frequency of each string using map
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string , int>mp;
    cout<<"Enter Number of string which you are going to taken ?"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        // mp[s] we created map with key string
        mp[s]=mp[s]+1;
    }
    
    for(auto pr :mp)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}