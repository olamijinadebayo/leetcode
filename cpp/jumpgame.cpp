#include<iostream>
#include<vector>

using namespace std;
bool canReachEnd(vector<int>&nums){
    nums[nums.size()-1] = nums[nums.size()-1] +1;
    cout<<nums[nums.size()-1]<<endl;
    vector<int>result;
    for (size_t i = 0; i<nums.size(); i++)
    {
        for (size_t j = 0; j < nums.size(); i++)
        {
            
        }
        
        
    }
    
    
}
int main(){
    vector<int>num={1,2,9};
    bool result;
    result= canReachEnd(num);
  
        cout<<result<<endl;
    
    return 0;

}