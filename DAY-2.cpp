
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

// 3rd approach
// Linked list round cycle method

#include <bits/stdc++.h> 
int findDuplicate(vector<int> &nums, int n){
	 // Write your code here.
  
  int slow = nums[0];
  int fast = nums[0];
      slow = nums[slow];
      fast = nums[nums[fast]];
  while (slow != fast){
      slow = nums[slow];
      fast = nums[nums[fast]];
  }
  fast = nums[0];
  while (slow != fast) {
    slow = nums[slow];
    fast = nums[fast];
  }
  return slow;
}


