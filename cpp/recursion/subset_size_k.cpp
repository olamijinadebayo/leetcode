using namespace std;
#include <vector>
#include <iostream> 
#include <unordered_map>
#include<unordered_set> 
#include<string>

// starting index
// vector bool to see if that number was choseen
// focus index
//total size
// current size
// nums[0,1,2,n]

void generate_subsets(vector<int>nums,int n,int k,int curr_size,int starting_index,vector<bool>used){
    if (curr_size==k)
    {
        for (size_t i = 0; i < nums.size(); i++)
        {
            if(used[i]== true){
                cout<<nums[i]<<endl;
            }
        }
        cout<<endl;
        return;
    }
    if (starting_index>= n)
    {
        return;
    }
    used[starting_index]=true;
    generate_subsets(nums,n,k,curr_size+1,starting_index+1,used);
    used[starting_index]=false;
    generate_subsets(nums,n,k,curr_size,starting_index+1,used);
        
    
    

}


int main(){
    vector<int> nums = {1,2,3,4};
    vector<bool> used ={false,false,false,false};
    generate_subsets(nums,4,2,0,0,used);
    
    return 0;
}