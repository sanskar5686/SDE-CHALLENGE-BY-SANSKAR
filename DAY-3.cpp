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
// Boyer's voting algo 

   int num1=-1,num2 = -1, c1 = 0,c2=0;
    for(auto num:arr){
        if(num==num1){
            c1++;
        }
        else if(num==num2){
            c2++;
        }
        else if(c1==0){
            num1 = num;
            c1=1;
        }
        else if(c2 ==0){
            num2 = num;
            c2=1;
        }
        else{
            c1--,c2--;
        }
    }
    vector<int> ans;
    int n = arr.size();
    int count1=0,count2=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == num1){
            count1++;
        }
        if(arr[i] == num2){
            count2++;
        }
    }
    if(count1 > n/3){
        ans.push_back(num1);
    }
    if(count2 > n/3){
        ans.push_back(num2);
    }
    return ans;
}
