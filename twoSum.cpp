using namespace std;
#include <vector>
#include <iostream> 
#include <unordered_map> 

vector<int>twoSum(vector<int>&nums,int target){
    unordered_map<int,int>umap;
    vector<int> result;

    for (int i = 0; i <nums.size(); i++)
    {
        int diff = target-nums[i];
        if (umap.find(diff)!= umap.end())
        {
            return {i,umap[diff]};
        }else
        {
          umap[nums[i]]=i;
        }
        
        
    }
    return result;

}

int main(){

    vector<int>nums{1,2,3,7,9,4};
    int target = 8;
    vector<int> result;
    result=twoSum(nums,target);
    for (size_t i = 0; i<result.size(); i++)
    {
        cout<<result[i]<<endl;
    }
    
    return 0;
}