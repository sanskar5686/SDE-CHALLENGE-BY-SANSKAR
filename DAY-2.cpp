// 1st approach 
// O(Nlog(N)) -> Time complexity

#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    pair<int,int> ans;
	sort(arr.begin(),arr.end());
    int m=0,r=0;
    for(int i=0;i<n-1;i++){
        if(arr[i] ==arr[i+1]){
            r = arr[i];
            break;
        }
    }
    int actualsum= n*(n+1)/2;
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum += arr[i];
    }
    m = actualsum - (totalsum - r);
    ans.first = m;
    ans.second = r;
    return ans;
}
