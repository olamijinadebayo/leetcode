using namespace std;
#include <vector>
#include <iostream> 
#include <unordered_map> 

vector<vector<string>>result;
bool is_safe(vector<string>v,int row,int col){
    // Check this row on left side
       for(int i=0;i<col;i++)
	{
		if(v[row][i]=='Q')
			return false;
	}
    // Check upper diagonal on left side
	for(int i=row,j=col;i>=0&&j>=0;i--,j--)
	{
		if(v[i][j]=='Q')
			return false;
	}
    // Check lower diagonal on left side */
	for(int i=row,j=col;i<v.size()&&j>=0;i++,j--)
	{
		if(v[i][j]=='Q')
			return false;
	}
	return true;
}
void backtrack(int col,int n,vector<string>curr){
    if (col==n)
    {
        result.push_back(curr);
        return;
    }
 
        for (int i = 0; i < n; i++)
        {   
              if (is_safe(curr,i,col))
            {
                curr[i][col]= 'Q';
                backtrack(col+1,n,curr);
                curr[i][col]='.';
            }
        }

    
}
vector<vector<string>> solve_nqueen(int n){
    vector<string>curr(n,string(n,'.'));
    backtrack(0,n,curr);
    return result;

}




int main(){
    solve_nqueen(4);
     for (auto &&i : result)
    {
        cout<< i[0]<<endl;
    }
 
    return 0;
}