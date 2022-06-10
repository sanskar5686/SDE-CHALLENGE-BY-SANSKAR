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
// Moore's - voting algo

#include<bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Moore’s Voting Algorithm
    int count=0,element = -1;
     for(int i=0;i<n;i++){
        if(count==0){
            element = arr[i];
        }
         if(element ==arr[i]){
             count +=1;
         }
         else{
             count -=1;
         }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == element){
            count++;
        }
    }
    if(count > n/2){
        return element;
    }
    return -1;
 
}
