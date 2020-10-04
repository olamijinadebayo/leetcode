#include<iostream>
#include<vector>
#include<algorithm>

//next permutation,123 yields 132
// find p[k] such that p[k] < p[k+1] from the right
// find p[l] such that p[l] is smallest number greater than p[k]
// swap p[l] and p[k]
//reverse p[k+1] up till the end
// 

using namespace std;
vector<int> next_permutation(vector<int>perm){
    vector<int> result;
    int k =perm.size()-2;
    while(k>=0 && perm[k]>perm[k+1]){
        --k;
    }
    if (k==-1){
        return {};
    }
    swap(perm[k],*find_if(perm.rbegin(),perm.rend(),[&](int a) {return a > perm[k];}) );
    reverse(perm.begin()+k+1,perm.end());
    return perm;
  
}
    
    
int main(){
    vector<int>num={1,2,3};
    vector<int> result= next_permutation(num);
    for(auto it : result){
        cout<<it<<",";
    }
   cout<<endl

    return 0;

}