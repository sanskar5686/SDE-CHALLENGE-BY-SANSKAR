
// 1st approach 
// Using extra space
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    if(n==0){
        return arr1;
    }
    if(m==0){
        return arr2;
    }
    int k=0;
    vector<int> ans(n+m);
    for(int i=0;i<m;i++){
        ans[k] = arr1[i];
        k++;
    }
     for(int i=0;i<n;i++){
        ans[k] = arr2[i];
         k++;
    }
    sort(ans.begin(), ans.end());
    return ans;
}

// 2nd approach 
// Using O(m*n) time complexity
#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int i=0, j =0,k;
    while(i<m){
        if(arr2[0] < arr1[i]){
            swap(arr1[i],arr2[0]);
        }
        i++;
         sort(arr2.begin(),arr2.end());
    }
    for(int p=0;p<n;p++){
        arr1[i] = arr2[p];
        i++;
    }
    return arr1;
}
