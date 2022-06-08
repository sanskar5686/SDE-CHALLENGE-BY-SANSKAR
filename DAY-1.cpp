//  Welcome to day-1
// 1st Approach
// Got it passed and written myself
#include <bits/stdc++.h> 
void SetZerosHelper(int i, int j,vector<vector<int>> &matrix , int row, int col){
    for(int k = 0;k<col;k++){
        if(  matrix[i][k] != 0)
        matrix[i][k] = -1;
    }
 for(int k = 0;k<row;k++){
        if(matrix[k][j] != 0)
        matrix[k][j] = -1;
    }
    return;
}
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int row = matrix.size();
    int col = matrix[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j] == 0){
              SetZerosHelper(i,j,matrix,row,col);
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j] == -1){
            matrix[i][j] =0;
            }
        }
    }
    return;
}
// This code looks very much optimized
