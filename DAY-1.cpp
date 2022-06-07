#include<bits/stdc++.h>
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size(),least = INT_MAX;
    int prev_diff = 0;
    for(int i =0;i<n;i++){
        if(prices[i] < least){
            least = prices[i];
        }
        int diff = prices[i] - least;
        if(diff > prev_diff){
            prev_diff = diff;
        }
    }
    return prev_diff;
}
