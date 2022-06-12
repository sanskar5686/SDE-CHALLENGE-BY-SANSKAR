
// Most optimized Combinatrics approach 
// Leetcode accepted

class Solution {
public:
  int uniquePaths(int m, int n) {
	// Write your code here.
      int N = m+n-2;
    double ans = 1;
      int r = m-1;
      for(int i=1;i<=r;i++){
          ans = ans*(N-r+i)/i;
      }
      return (int)ans;
}
};
