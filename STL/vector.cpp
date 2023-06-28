#include<iostream>
#include <vector>
using namespace std;
int main()
{
   vector<char>v(10);
   for(int i=0;i,i<10;i++)
   {
      v[i]='A'+i;
   }
   cout<<"Original "<<endl;
   for(int i=0;i<10;i++)
   {
      cout<<v[i]<<" ";
   }
   cout<<endl;
   v.push_back('Z');
   v.push_back('Y');
   v.pop_back();
   vector<char>::iterator itr;
   itr=v.begin();
   cout<<*itr<<endl;

   itr=v.end()-1;
   cout<<*itr<<endl;

   cout<<v.size()<<endl;

   
   v.resize(4);
   v.clear();
   for(int i=0;i<v.size();i++)
   {
      cout<<v[i]<<" ";
   }
   
 return 0;
}