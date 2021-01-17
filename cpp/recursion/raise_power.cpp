using namespace std;
#include <vector>
#include <iostream> 
#include <unordered_map> 

int raise_power(int n,int k){
   
   if (k==0 )
   {
       return 1;
   }
   
   return n* raise_power(n,k-1);


}





int main(){
    
    int n= raise_power(5,3);
    {
        cout<<n<<endl;
    }
    return 0;
}