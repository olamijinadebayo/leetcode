// 42 % 10 =2 isolate 
// 42/10= 4  drop the digit isolated
// Result =0; 20,

// While  n is not = 0
// Extract the last digit by taking modulo 10 of the integer
// Add the extracted digit to the result and multiply by 10
// Drop the last digit  in the number 
#include<iostream>
using namespace std;

int reverseDigits(int number){
	int result=0;
	while(number !=0){
	int extract = number % 10;
	result = result * 10  + extract;
	number = number/10;
}


	return result;
}


int main(){
    int x=223456;
    //int y=-3;
    int result = reverseDigits(x);
    cout<<result<<endl;
    return 0;
}