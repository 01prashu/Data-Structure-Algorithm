// #include<iostream>
// #include <map>
#include <bits/stdc++.h>
using namespace std;

// Program to check whether key is present or not
bool check_program(map<string , int> &mp , string s )
{
    bool flag=false;
    map<string , int>::iterator it;
    it=mp.find(s);
    if(it != mp.end())
    {
        flag=true;
    }
    return flag;
}


int main()
{
    map <string , int> mp;
    mp["Prashant"]=10;
    mp["Bharat"]=8;
    mp["kunal"]=99;
    mp["Pranav"]=5;

    // In map key are arrange in sorted order
    // Each one key comapre with other to find out exact order once key get exact order..
    for(auto pr: mp)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }


    map <string , int> ::iterator it;
    cout<<endl;
    for(it=mp.begin() ; it!=mp.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;

    cout << check_program(mp ,"Prashant");
    return 0;
}