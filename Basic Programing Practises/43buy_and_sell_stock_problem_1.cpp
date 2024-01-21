#include<iostream>
#include <vector>
using namespace std;
int solve(vector<int>&nums)
{
    int profit = 0;
    int buy = 0;
    int sell = 0;
    for(int i = 0 ; i<nums.size()-1;i++){
        buy = nums[i];
        for(int j = (i+1);j<nums.size();j++)
        {
            sell=nums[j];
            if(profit < (sell - buy))
            {
                profit = (sell-buy);
            }
        }
    }
    return profit;
}
int solve2(vector<int>&prices)
{
    
}
int main()
{
    int size = 0;
    cout<<"Enter size of vector: "<<endl;
    cin>>size;
    vector<int>nums;
    cout<<"Enter elements in vector"<<endl;
    for(int i = 0;i<size;i++)
    {
        int data;
        cin>>data;
        nums.push_back(data);
    }
    int ans = solve2(nums);
    cout<<"Answer is:"<<ans<<endl;
 return 0;
}