#include<iostream>
#include<vector>
#include<algorithm>

//apply a permutation to an array
// ex apply 1-0-2-3 on abcd gives b-a-c-d,2013-yields bcad
// if an element has been updated you simply set its value to a negative number
//at each position,you simply swap the number 
//
// 

using namespace std;
int permute_array(vector<char>chars,vector<int>permutation){
   int  n=permutation.size();
    for(int i = 0; i < n; i++)
    {
        int next =i;
        swap(chars[i],chars[permutation[i]]);
    }
    
    
  
}
    
    
int main(){
    vector<int>num={12,11,13,9,12,8,14,13,15};
    int result= sell_stock_twice(num);
    cout<<result<<endl;


    return 0;

}