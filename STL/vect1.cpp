#include<iostream>
#include <map>
#include<vector>
using namespace std;
void displayvect_str(vector<string>&str)
{
    map<char, int>mp;
    for(int i=0;i<str.size();i++)
    {
        string s= str[i];
        for(int j=0;j<s.size();j++)
        {
            mp[s[j]]++;
        }
    }
    for (auto pr:mp)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    vector<string>s;
    s.push_back("Prashant");
    s.push_back("Pranav");
    s.push_back("Pravin");
    s.push_back("Pratap");
    displayvect_str(s);
    return 0;
}