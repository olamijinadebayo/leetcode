using namespace std;
#include <vector>
#include <iostream> 
#include <unordered_map> 

double power(double x,int y){
    double result = 1.0;
    long long power =y;
    if (y <0){
        power = - power;
        x =1.0/x;
    }
    while (power!=0)
    {
        if(power & 1){
            result = x * result;
        }
        x=x*x;
        power >>=1;
    }
    return result;
}

int main(){
    double x=2;
    int y=-3;
    double result = power(x,y);
    cout<<result<<endl;
    return 0;
}