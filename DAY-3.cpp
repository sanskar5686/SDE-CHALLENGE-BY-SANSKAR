// 1st approach 
// Using normal searching - O(m*n) 

#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        if(mat[i][j] ==target){
            return true;
        }
        }
    }
    return false;
}

// 2nd approach 
// Using binary search - O(log(m*n))

#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
//     int n = mat.size();
//     int m = mat[0].size();
    int start = 0;
    int end = (m*n)-1;
    while(start <=end){
        int mid = (start +end)/2;
        if(mat[mid/n][mid%n] ==target){
            return true;
        }
        else if(mat[mid/n][mid%n] < target){
             start = mid+1;
        }
        else{
             end = mid-1;
        }
    }
    return false;
}
