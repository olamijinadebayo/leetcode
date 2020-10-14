#include <vector>
#include <iostream> 
#include <unordered_map>

using namespace std;

vector<int>increment_by_one(vector<int>&A){
    // add one to the last element 
    ++A.back();
    int n= A.size()-1;

    for(int i =n;i>0 && A[i]==10;i--){
            A[i]=0;
            ++A[i-1];
    }
    if (A[0]==10)
    {
        A[0]=0;
        A.insert(A.begin(),1);

    }
    return A;
    

}


int main(){
    vector<int>nums{1,9,9};
    vector<int>result;
    result=increment_by_one(nums);
    for (size_t i = 0; i<result.size(); i++)
    {
        cout<<nums[i];
    }
    cout<<endl;
    return 0;
}