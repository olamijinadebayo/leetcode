// given an array [1,2,9]  return [1,3,0]  do not convert to an integer 
// 1,2,10

// start by adding one to the last element of the array
// loop through all the elements in descending order
// if the element is equal to 10,set its value to zero and add 1 to the left hand side
//after the loop is done if the first element is equal to 10,set its value to zero and insert one at the beginning of the array

#include<iostream>
#include<vector>

using namespace std;
vector<int>plusOne(vector<int>&nums){
    nums[nums.size()-1] = nums[nums.size()-1] +1;
    cout<<nums[nums.size()-1]<<endl;
    for (size_t i = nums.size()-1; i>0 && nums[i]==10; i--)
    {
       if (nums[i] ==10)
       {
          nums[i]=0;
          nums[i-1]= nums[i-1]+1;
       }
        
    }
    cout<<nums[0]<<endl;
    if (nums[0]==10)
    {
       nums[0]=0;
       nums.insert(nums.begin(),1);
    }
    return nums;
    
}
int main(){
    vector<int>num={1,2,9};
    vector<int>result;
    result= plusOne(num);
    for (size_t i = 0; i<num.size(); i++)
    {
        cout<<num[i]<<endl;
    }
    return 0;

}
