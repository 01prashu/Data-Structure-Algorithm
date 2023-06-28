//sorting algorithm
//mutating algorithm
//non- mutating algorithm
//numerical algorithm

#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    //non mutating algorithm
    //find ,count  , equal , search
    int *ptr , key;
    int a[]={1 , 2, 3 , 4,5};
    cout<<"Enter value for searched"<<endl;
    cin>>key;
    ptr=find(a , a+5,key);
    cout<<"Element present at: "<<(ptr-a)<<endl;

    //find(a  , a+n , key)  , find_if(a , a+n , key),binary_search(a , a+ n , key)

    //sorting algorihtm
    sort(a , a+5);//(adresss , limit)
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }

    //



    //union intersection operation
    int aa[]={1 , 2 , 3 , 4, 5 ,6};
    int bb[]={1 , 2, 3 ,4};
    vector<int>v[10];
    
    sort(aa , aa+6);
    sort(bb ,bb+4 );
    vector<int>::iterator it;
    it=set_union(aa , aa+6 , bb , bb+4 , v->begin());
    v->resize(it-v->begin());

    for(it=v->begin() ;it !=v->end() ; ++it)
    {
        cout<<(*it)<<" ";
    }
     return 0;
}