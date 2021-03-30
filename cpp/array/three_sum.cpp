
#include <vector>
#include <iostream> 
#include <unordered_map> 
#include <bits/stdc++.h> 
using namespace std;

//Input: nums = [-1,0,1,2,-1,-4]
//Output: [[-1,-1,2],[-1,0,1]]

// loop through each elem in arr
// select the curr element
// check for duplicate if yes skip the element
// low = next element,high = last elemnt
// calculate sum = curr +  low +high
// if sum <0 low++ if sum> 0 high--
// if sum==0  append all the elements to the array
// after appending check if the other elements arent duplicates also
// 
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>>result;
        for (size_t i = 0; i < nums.size()-2; i++)
        {
             if(i>0 && nums[i]== nums[i-1]) continue;
             int low =i +1;
             int high=nums.size()-1;
             while (low < high)
             {
                 int sum = nums[i] + nums[low]+ nums[high];
                 if (sum<0)
                 {
                    low++;
                 }
                 else if (sum>0)
                 {
                    high--;
                 }
                 else{
                     result.push_back({nums[i] + nums[low]+ nums[high]});
                     // avoid duplicates while checking for other probable sums
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