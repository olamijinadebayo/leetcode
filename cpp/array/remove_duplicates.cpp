#include<iostream>
#include<vector>


// have an iteger n to point to the last item in the unique array
// if arr[i] ==arr[i-1] continue i.e compare current item with the one on the left
// else increment n and set arr[n]==arr[i]

using namespace std;
int removeDuplicates(vector<int>&nums){
    int write_index=0;
    for (size_t i = 0; i<nums.size(); i++)
    {
        
        if (i==0 || nums[i] != nums[i-1])
        {
            write_index++;
            nums[write_index]==nums[i];
            
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