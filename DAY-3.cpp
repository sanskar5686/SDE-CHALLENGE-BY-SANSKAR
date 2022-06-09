// 1st approach 
// Using hashmaps
#include<bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    int ans =-1;
    for(int i=0;i<n;i++){
        if(map[arr[i]] > n/2){
            ans = arr[i];
        }
    }
    return ans;
}

// 2nd approach 
