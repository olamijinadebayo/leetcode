using namespace std;
#include <vector>
#include <iostream> 
#include <unordered_map> 

int stock(vector<int>nums){
    //vector<int>&V = *nums;
    int minimum_so_far=INT16_MAX;
    int maximum_profit=0;

    for (size_t i = 0; i < nums.size(); i++)
    {
        
            int current_profit=nums[i]- minimum_so_far;  
            maximum_profit = max(maximum_profit,current_profit);
            minimum_so_far=min(minimum_so_far,nums[i]);
 
        
    }
    return maximum_profit ;
    

    
}





int main(){
    vector<int>nums{0,1,2,0,2,1,1};
    int result=stock(nums);

        cout<<result<<endl;
 
    return 0;
}