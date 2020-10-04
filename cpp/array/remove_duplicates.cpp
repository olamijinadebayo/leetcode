#include<iostream>
#include<vector>

using namespace std;
int removeDuplicates(vector<int>&nums){
    int write_index=1;
    for (size_t i = 0; i<nums.size(); i++)
    {
        
        if (nums[i] != nums[i+1])
        {
            nums[write_index++]= nums[i+1];
            
        }
        
        
    }
    return write_index;
    
}
int main(){
    vector<int>num={2,3,5,5,7,11,11,13};
    int result=0;
    result= removeDuplicates(num);
  
    cout<<result<<endl;
    
    return 0;

}