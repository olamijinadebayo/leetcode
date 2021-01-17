#include<iostream>
#include<vector>

//pseudocode
// initialize left and right values for both forward  and backward arrays
// calculate the profit forwards
// calculate the profit backwards
// array - 1,3,5,2,6,9

 using namespace std;
// int sell_stock_twice(const vector<int>& prices){
//     if( prices.size()==0 )return 0;
//     int n=prices.size();
//     int left[n];
//     int right[n];
//     int max_profit=0;
//     left[0]=0;right[n-1]=0;
//     int left_min=prices[0];
//     int right_max=prices[n-1];
   

//        int i,j;
//     for( i = 1, j=n-2; i < n,j>=0; i++,j--)
//     {
//         left_min=min(left_min,prices[i]);
//         left[i]= max(left[i-1],prices[i]-left_min);
//         right_max= max(right_max,prices[j]);
//         right[j]= max(right[j+1],right_max-prices[j]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         max_profit = max(max_profit,left[i]+right[i]);
//     }
    

//     return max_profit ;
// }

int sell_stock_twice(const vector<int>&prices){
    int min_price=prices[0];
    int profitAfterFirstSell=0;
    int profitAfterSecondBuy= INT16_MIN;
    int profitAfterSecondSell =0;
    
    

    for(size_t i=1;i<prices.size();++i){
        min_price=min(prices[i],min_price);
        profitAfterFirstSell= max(prices[i]-min_price,profitAfterFirstSell);
         
         profitAfterSecondBuy = max(profitAfterFirstSell-prices[i],profitAfterSecondBuy);
         profitAfterSecondSell = max(profitAfterSecondBuy+prices[i],profitAfterSecondSell);
    }
    return profitAfterSecondSell;
}
    
    
int main(){
    vector<int>num={12,11,13,9,12,8,14,13,15};
    int result= sell_stock_twice(num);
    cout<<result<<endl;


    return 0;

}