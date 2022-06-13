// 1st approach
// O(n^2) approach 
// 50% solution 

#include <bits/stdc++.h> 
int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j && arr[i] > 2*arr[j]){
                count++;
            }
        }
    }
    return count;
}

// 2nd approach 
// Merge sort approach 

#include <bits/stdc++.h>
int Merge(vector<int> &arr, int si, int mid, int ei){
    int j=mid+1,k=0;
    int count=0;
    vector<int> a;
    for(int i=si;i<=mid;i++){
    while(j<=ei && arr[i] > 2*arr[j]){
        j++;
    }
    count += (j - (mid+1));
    }
    int left = si,right = mid+1;
    while(left<=mid && right<=ei){
        if(arr[left] <= arr[right]){
            a.push_back(arr[left]);
            left++;
        }
        else{
            a.push_back(arr[right]);
            right++;
        }
    }
    for(;left<=mid;left++){
        a.push_back(arr[left]);
    }
     for(;right<=ei;right++){
        a.push_back(arr[right]);
    }
    for(int i = si;i<=ei;i++){
        arr[i] = a[i-si];
    }
    return count;
}
int MergeSortHelper(vector<int> &arr, int si,int ei){
    if(si>=ei){
        return 0;
    }
    int mid = (si+ei)/2;
   int ans = MergeSortHelper(arr,si,mid);
    ans += MergeSortHelper(arr,mid+1,ei);
    ans +=  Merge(arr,si,mid,ei);
    return ans;
}
int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
   int ans =  MergeSortHelper(arr,0,n-1);
    return ans;
}
