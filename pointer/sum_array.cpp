#include<iostream>
using namespace std;
int fun(int *arr  , int size)
{
    int p=*arr;
    for(int i=1;i<size;i++)
    {
        p=p+*(arr+i);
    }
    return p;
}
int main()
{
    int size=5;
    int arr[size]={10 ,20 ,30 ,40 ,50};
    cout<<fun(arr ,size);
 return 0;
}