
#include <vector>
#include <iostream> 
#include <unordered_map> 
#include <bits/stdc++.h> 
using namespace std;

//Input: nums = [-1,0,1,2,-1,-4]
//Output: [[-1,-1,2],[-1,0,1]]

// loop through each elem in arr
// for each element calc difference btw elem and zero
// run two sum on the remaining elements of the array
// to guarantee uniqueness if arr[i]==arr[1+1] continue

    vector<vector<int>> threeSum(vector<int>& nums) {
    int n=nums.size();
     vector<vector<int>>result;
    std::sort(nums.begin(),nums.end());
     
     for(int i=0;i<n-2;i++){
         // avoid duplicates by skipping an elemnt if its equal to previous element
         if ( i==0 || (i>0 && nums[i]!=nums[i-1]) )
         {
                int sum_rem =0-nums[i];
                int low =i+1;
                int high= n-1;
                while (low<high)
                {
                    if (nums[low]+nums[high]== sum_rem)
                        
                    {
                         result.push_back({nums[i],nums[low],nums[high]});
                        //skip consecutive elements if they are equal
                        while (low<high && nums[low]==nums[low+1])
                        {
                            low++;
                        }
                        while (low<high && nums[high]==nums[high-1])
                        {
                            high--;
                        }
                        low++;
                        high--;
                        
                    }
                    else if (nums[low]+nums[high] < sum_rem)
                    {
                        low++;
                    }else
                    {
                        high--;
                    }
                    
              
                    
                }
                }
         
    
         
     }
     
    return result;  
    }
int main(){
    vector<int>input_array={-1,0,1,2,-1,-4};
    vector<vector<int>>result;
    result=threeSum(input_array);
    cout<<result.size();
    vector<int> res1=result[0];

    
    return 0;
}