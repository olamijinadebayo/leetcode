// move the first n-1 pegs in the first peg to a temporary peg
// move the remaning peg in the stack to the destination peg
// recursively transfer the n-1 pegs in the temporary peg to the destination peg
#include <vector>
#include <iostream> 
#include <unordered_map>
#include<stack> 
using namespace std;

const int kNumPegs=3;
void move_pegs(int num_rings_to_move,array<std::stack<int>,kNumPegs>&pegs,int from_stack,int to_stack,int use_stack){

   if (num_rings_to_move==1)
   {
        pegs[to_stack].push(pegs[from_stack].top());
        pegs[from_stack].pop();
        cout<< "MOve from peg " << from_stack << " to peg " <<to_stack<<endl;
   }
   else
   {
        move_pegs(num_rings_to_move-1,pegs,from_stack,use_stack,to_stack);
        pegs[to_stack].push(pegs[from_stack].top());
        pegs[from_stack].pop();
        cout<< "MOve from peg " << from_stack << " to peg " <<to_stack<<endl;
        move_pegs(num_rings_to_move-1,pegs,use_stack,to_stack,from_stack);
   }
   

  


};
void towerOfHanoi(int num_rings){
    // intialize the stacks
    array<std::stack<int>,kNumPegs>pegs;
    //pegs.reserve(kNumPegs);
    for(int i=num_rings;i>=1;--i){
        pegs[0].push(i);
    }
    move_pegs(num_rings,pegs,0,1,2);
}





int main(){
   //cout<<"hello world";


   towerOfHanoi(3);
    return 0;
}