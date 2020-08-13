//multiply two integers represented as an array

#include<iostream>
#include<vector>

using namespace std;
vector<int>multiply(vector<int>&nums){
    nums[nums.size()-1] = nums[nums.size()-1] +1;
    cout<<nums[nums.size()-1]<<endl;
    vector<int>result;
    for (size_t i = 0; i<nums.size(); i++)
    {
        for (size_t j = 0; j < nums.size(); i++)
        {
            
        }
        
        
    }
    return nums;
    
}
int main(){
    vector<int>num={1,2,9};
    vector<int>result;
    result= multiply(num);
    for (size_t i = 0; i<num.size(); i++)
    {
        cout<<num[i]<<endl;
    }
    return 0;

}