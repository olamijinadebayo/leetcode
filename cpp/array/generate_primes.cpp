#include<iostream>
#include<vector>
#include<deque>

using namespace std;
vector<int> generate_primes(int n){
    vector<int> primes;
    deque<bool>is_prime(n+1,true);
    is_prime[0]=false;
    is_prime[1]=false;
    for(int p=2;p<n;p++){
        if (is_prime[p])
        {
            primes.push_back(p);
            for (auto j = p;j<n;j+=j)
            {
                is_prime[j] = false;
            }
            
        }
        
        
    }
return primes;


    
    
}
int main(){
    vector<int>nums={};
    int n =9;
    nums = generate_primes(n);
      for(size_t i =0;i <nums.size();i++){
        cout<<nums[i]<<",";
      }
      cout<<endl;
    return 0;

}