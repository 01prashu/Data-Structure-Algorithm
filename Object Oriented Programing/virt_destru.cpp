#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"Base class constructor"<<endl;
    }
    virtual ~base()
    {        
        cout<<"Base clas Destructor"<<endl;
    }
};
class derieved:public base
{
    public:
    derieved()
    {
        cout<<"Derieved class constructor"<<endl;
    }
    ~derieved()
    {
        cout<<"Derieved class destructor"<<endl;
    }
};
int main()
{
    cout<<"Subham mate 66"<<endl;
    return 0;
}