#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

void backtrack(bitset<32>&bits,vector<int>&result,int k){
   cout<< "backtrack" <<k<<endl;
    if (k==0)
    {
        result.push_back(bits.to_ullong());
        cout<<bits.to_ullong()<<endl;
        return;
    }
    backtrack(bits,result,k-1);
    bits.flip(k-1);
    backtrack(bits,result,k-1);
    
}
vector<int>gray_code(int n){
    bitset<32>bits;
    vector<int>result;
    backtrack(bits,result,n);
    return result;
}

int main(){
    vector<int>res =gray_code(3);
    for (auto &&i : res)
    {
        cout<<i<<",";
    }
    cout<< endl;
    
}