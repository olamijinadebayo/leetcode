#include<iostream>
#include<vector>

using namespace std;



int rabin_karp(const string t,const string s){
    // check if the substring size is greater
    if(s.size()> t.size()){
        return -1;
    }

    const int k_base=26;
    int t_hash=0,s_hash=0; // cal hash_codes
    int power_s =1;
    for(int i=0;i<s.size();++i){
        power_s =i ? power_s * k_base:1;
        t_hash =t_hash * k_base+ t[i];
        s_hash =s_hash * k_base+ s[i];

    }
}

int main(){
    vector<int>num={1,2,9};
    bool result;
    result= canReachEnd(num);
  
        cout<<result<<endl;
    
    return 0;

}

// abcdef - bcd