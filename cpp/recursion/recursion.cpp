using namespace std;
#include <vector>
#include <iostream> 
#include <unordered_map> 

int factorial(int n){
   cout<< "factorial"<< n<<endl;
   if (n==0 || n ==1)
   {
       return 1;
   }
   
   return n* factorial(n-1);


}





int main(){
    
    int n= factorial(5);
    {
        cout<<n<<endl;
    }
    return 0;
}