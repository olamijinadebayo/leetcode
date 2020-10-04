#include<string>
using namespace std;

long long compute_hash(string const& s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}


int main(){
    return 0;
}


//hash(s)=s[0]+s[1]⋅p+s[2]⋅p2+...+s[n−1]⋅pn−1modm

long long hash_string(string s){

    long long hash_value=0;
    int p=31;
    int m= 1e9 + 10;
    long long p_power=1;
    for(char c :s){
        hash_value= (hash_value + (c-'a'+1 * p_power)% m);
        p_power = (p * p_power)%m;
    }
    return hash_value;
}