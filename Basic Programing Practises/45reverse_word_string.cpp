#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
    string reverseWords(string s) {
        string ans="";
        int i = s.length()-1 , j;
        while(i>0)
        {
            while(s[i] ==' ' && i>=0)i--;
            j = i;
            string temp = " ";
            while(s[j] !=' ' && j>=0)
            {
                
                temp +=s[j];
                j--;
            }
            reverse(temp.begin() , temp.end());
            ans +=temp;
            i=j;
        }
        return ans;
    }
int main()
{
    string s = "  hello world  ";
    cout<<reverseWords(s)<<endl;
 return 0;
}