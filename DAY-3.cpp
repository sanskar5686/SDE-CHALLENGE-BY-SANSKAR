// 1st approach 
// Using hashmaps - Here we have to iterate in the entire vector

#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    set<int> ans_lite;
    for(int i=0;i<n;i++){
        if(map[arr[i]] > n/3){
            ans_lite.insert(arr[i]);
        }
    }
    vector<int> ans;
    set<int, greater<int> >::iterator itr;
   for(itr=ans_lite.begin();itr!=ans_lite.end();itr++)
    ans.push_back(*itr);
    
   return ans;
}

// 2nd approach 
