 #include<vector>
 #include<iostream>
 using namespace std;
 
 
 
 
 
  int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0], curSum = 0;
        
        for (int n : nums) {
            if (curSum < 0)
                curSum = 0;
            curSum += n;
            maxSub = max(maxSub, curSum);
        }
        return maxSub;
  }
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    int result = maxSubArray(nums);
    cout<<result<<endl;
};