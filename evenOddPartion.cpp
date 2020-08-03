using namespace std;
#include <vector>
#include <iostream> 
#include <unordered_map> 
//given an array of integers,arrange the array in such way that the odd numbers comes first using constant space

void evenOdd(vector<int>*nums){
    vector<int>&vr= *nums;
    int next_even=0;
    int next_odd =vr.size()-1;
    while (next_even<next_odd){
        if (vr[next_even] % 2 ==0){
            next_even++;
        }else
        {
            swap(vr[next_even],vr[next_odd]);
            next_odd--;
        }
        
    }
}

int main(){
    vector<int>nums{2,3,5,7,8,10};
    evenOdd(&nums);
    for (size_t i = 0; i<nums.size(); i++)
    {
        cout<<nums[i]<<endl;
    }
    return 0;
}