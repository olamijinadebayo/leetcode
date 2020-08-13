using namespace std;
#include <vector>
#include <iostream> 
#include <unordered_map> 

void partition(vector<int>*nums,int pivot){
    vector<int>&V = *nums;
    int smaller =0;
    int equal =0;// this helps represent the unidentified partition
    int larger= V.size()-1;

    while(equal < larger){
        if (V[equal]< pivot)
        {
           swap(V[smaller],V[equal]);
           smaller++;
           equal++;

        }
        else if (V[equal]== pivot)
        {
           equal++;
        }
        else
        {
            swap(V[equal],V[larger]);
            larger--;

        }
        
    }


}





int main(){
    vector<int>nums{0,1,2,0,2,1,1};
    partition(&nums,0);
    for (size_t i = 0; i<nums.size(); i++)
    {
        cout<<nums[i]<<endl;
    }
    return 0;
}