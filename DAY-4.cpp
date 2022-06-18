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
