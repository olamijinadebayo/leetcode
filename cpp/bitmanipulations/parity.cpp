#include<string>
#include <vector>
using namespace std;
#include<iostream>

// shift by half each time and xor with each other
// take number & 000000000000001 to exract the parity through the last digit

short computeParityMostEfficient(int no) {
    //no ^= (no >> 32);
    no ^= (no >> 16);
    no ^= (no >> 8);
    no ^= (no >> 4);
    no ^= (no >> 2);
    no ^= (no >> 1);
    // Rightmost bit of y holds the parity value 
    // if (y&1) is 1 then parity is odd else even 
    if (no & 1) 
        return 1; 
    return 0; 

   
}
int main(){

    short result;
    int num =3;
    result=computeParityMostEfficient(num);
     cout<<num<<endl;
    cout<<result<<endl;
}