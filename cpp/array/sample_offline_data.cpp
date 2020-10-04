#include<iostream>
#include<vector>
#include<algorithm>
#include<random>

//next permutation,123 yields 132
// find p[k] such that p[k] < p[k+1] from the right
// find p[l] such that p[l] is smallest number greater than p[k]
// swap p[l] and p[k]
//reverse p[k+1] up till the end
// 

using namespace std;
vector<int> random_sampling(vector<int>*perm,int k){
    vector<int> & A= *perm;
    default_random_engine seed ((random_device())());
    for(int i=0;i<k;i++){
        swap(A[i], A[uniform_int_distribution<int>{ i, static_cast<int>(A.size()) -1}(seed)]);
    }
   
    return A;
  
}
    
    
int main(){
    vector<int>num={1,2,3};
    vector<int> result= random_sampling(&num,2);
    for(auto it : result){
        cout<<it<<",";
    }
   cout<<endl;

    return 0;

}