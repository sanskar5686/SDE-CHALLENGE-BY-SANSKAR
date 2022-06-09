
// 1st approach 
// Time complexity -> N(Log(N)) + O(N)

#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	 // Write your code here.
          sort(arr.begin(), arr.end());
    int ans =0;
    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1]){
            ans = arr[i];
        }
    }
    return ans;
}

// 2nd approach 
// Time complexity  -> O(N)
// Space complexity -> O(N)

#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	 // Write your code here.
          int ans =0;
    int freq[n+1] = {0};
    for(int i=0;i<n;i++){
       freq[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq[arr[i]] >= 2){
            ans = arr[i];
        }
    }
    return ans;
}
