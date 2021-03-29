#include<iostream>
#include<vector>
#include<deque>
using namespace std;
// area = length of shorter vertical line * distance between lines =>j-i *min height(i,j)
// 3 9 3 4 7 2 12 6

int maximim_area(vector<int>&height){
    int max_area=INT16_MIN;
    int curr_area=0;
    // brute force
    // int length;
    // int width;
    // for(int i=0;i < height.size();i++){
    //     for(int j=i+1;j<height.size();j++ ){
    //         if (height[i]< height[j]){
    //             length=height[i];
    //         }else
    //         {
    //             length=height[j];
    //         }
    //         width=j-i;
    //         curr_area= length * width;
    //         max_area =max(curr_area,max_area);
            
    //     }
    // }

    // efficient solution 

    int left =0;int right = height.size()-1;
    while (left < right )
    {
        curr_area = (right-left) * min(height[left],height[right]);
        max_area= max(max_area,curr_area);

        // the main objective here is to maximize the minimum height
        if(height[left]< height[right]){
            left++;
        }
        else{right--;} 
    }
    
    return max_area;
}
int main(){
    vector<int>nums={4,3,2,1,4};
    int res= maximim_area(nums);    
    cout<<res<<endl;
    return 0;
}