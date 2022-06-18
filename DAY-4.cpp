// Approach - 1 (Naive approach)
// T.c -> O(N^2) 
#include <bits/stdc++.h> 
int uniqueSubstrings(string arr)
{
    //Write your code here
    int maxans = -1;
    for(int i=0;i<arr.size();i++){
        unordered_set<int> set;
        for(int j=i;j<arr.size();j++){
          if(set.find(arr[j]) != set.end()){
              maxans = max(maxans, j-i);
              break;
          }
            set.insert(arr[j]);
        }
    }
    return maxans;
}
//Approach - 2 
// Using O(2N) solution and space is O(N)
class Solution {
public:
    int lengthOfLongestSubstring(string arr) {
        int n = arr.size();
        // if(n==0){
        //     return 0;
        // }
        set<int> s;
        int left = 0, right =0;
        int len =0;
       // set<int> s;
        while(right < n){
           if(s.find(arr[right]) != s.end()){
               while(left < right  && s.find(arr[right]) != s.end()){
                   s.erase(arr[left]);
                   left++;
               }
           }
            s.insert(arr[right]);
            len = max(len, right-left+1);
            right++;
        }
        return len;
    }
};

// Approach - 3 (Best approach)
// Using O(N) solution and space is O(1)
class Solution {
public:
    int lengthOfLongestSubstring(string arr) {
        int n = arr.size();
        // if(n==0){
        //     return 0;
        // }
        int left = 0, right =0;
        int len =0;
        vector<int> map(256,-1);
        while(right < n){
            if(map[arr[right]] != -1){
                // update l
                left= max(left,map[arr[right]]+1);
            }
            map[arr[right]] = right;
            len = max(len, right-left+1);
            right++;
        }
        return len;
    }
};
