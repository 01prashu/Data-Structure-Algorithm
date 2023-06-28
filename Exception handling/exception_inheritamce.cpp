#include<iostream>
using namespace std;
class B
{

};
class D:public B
{

};
int main()
{

    try 
    {
        D obj;
        throw obj;
    }
    //  catch(D d)   
    // {
    //     cout<<"Exception for derieved class"<<endl;
    // }
    // while handling exception it checks class can match with specific class or not , then it checks for base class
    // every derieved class is also part of base class hence it do'nt check for derieved class it handle exception of base class
    catch(B b)
    {
        cout<<"Exception for base class "<<endl;
    }
     catch(D d)
    {
        cout<<"Exception for derieved class"<<endl;
    }
   
 return 0;
}