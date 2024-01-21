#include <iostream>
using namespace std;
    int lengthOfLastWord(string s) {
        if(s.length() == 1)return 1;
        int i = s.length()-1;
        while(s[i] ==' ' && i>=0)i--;
        int c = 0;
        while(s[i] !=' ' && i>= 0)
        {
            i--;
            c++;
        }
        return c;
    }
int main()
{
    string s = "Hello";
    cout<<lengthOfLastWord(s)<<endl;
    return 0;
}