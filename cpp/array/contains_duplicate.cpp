using namespace std;
#include <vector>
#include <iostream> 
#include <unordered_map> 
// 3 cases 
// 1 if the number is positive multiply by the prev_max to get the current max
// 2 if the number is negative multiply by the prev_max to get the current min
// starting with this current number

bool has_duplicate(vector<int>nums){
    unordered_map<int,bool>hash_map;
    for (auto &&num : nums)
    {
        if (hash_map.find(num)!= hash_map.end())
        {
            return true;
        }
        else
        {
            hash_map[num]= true;
        }
        
    }
    return false;
}



int main(){
    vector<int>nums={2,3,-2,4,3};
    int res = has_duplicate(nums);
    cout<<res <<endl;
 
 
    return 0;
}