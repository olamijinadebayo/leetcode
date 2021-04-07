using namespace std;
#include <vector>
#include <iostream> 
#include <unordered_map> 
// 3 cases 
// 1 if the number is positive multiply by the prev_max to get the current max
// 2 if the number is negative multiply by the prev_max to get the current min
// starting with this current number

int max_product(vector<int>nums){
    int current_max = nums[0];
    int current_min=nums[0];
    int previous_min =nums[0];
    int previous_max = nums[0];
    int res=nums[0];

    for (size_t i = 1; i < nums.size(); i++)
    {
       current_max = max(previous_max*nums[i],max(previous_min*nums[i],nums[i]));
       current_min = min(previous_min*nums[i],min(previous_max*nums[i],nums[i]));
       res = max(res,current_max);
       previous_max= current_max;
       previous_min =current_min;
    }
    
    return res;
}



int main(){
    vector<int>nums={2,3,-2,4};
    int res = max_product(nums);
    cout<<res <<endl;
 
 
    return 0;
}