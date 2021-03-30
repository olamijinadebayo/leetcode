using namespace std;
#include <vector>
#include <iostream> 
#include <unordered_map>
#include<unordered_set> 
#include<string>

// This function takes three parameters: 
// 1. String 
// 2. Starting index of the string 
// 3. Ending index of the string. 
vector<string> result;
void permute(string a, int l, int r) 
{ 
    unordered_set<char>seen;
    // Base case 
    if (l == r){
        //cout<<a<<endl; 
        result.emplace_back(a);
    }    
    else
    { 
        // Permutations made 
        for (int i = l; i <= r; i++) 
        { 
            if (seen.find(a[i])!= seen.end())
            {
                continue;
            }
            
            seen.insert(a[i]);
            // Swapping done 
            swap(a[l], a[i]); 
 
            // Recursion called 
            permute(a, l+1, r); 
 
            //backtrack 
            swap(a[l], a[i]); 
        } 
    } 
} 
 
// Driver Code 
int main() 
{ 
    string str = "AABC"; 
    int n = str.size(); 
    permute(str, 0, n-1); 
    for (auto &&i : result)
    {
        cout<<i<<endl;
    }
    
    return 0; 
} 



