
// 1st approach 
// Time complexity -> N(LOG(N))

/*

	Time complexity: O(N*log(N)) 
	Space complexity: O(1)
	
	Where N is the length of the given array. 
	
*/

#include <algorithm>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// sorting the array
	sort(arr.begin(), arr.end());
	
	int r, m;
	
	for(int i = 0; i < n - 1; i += 1)
	{
		// checking if two adjacent numbers are same
		if(arr[i] == arr[i+1])
		{
			r = arr[i];
			break;
		}
	}
	
	// calculating the sum of the given array
	int currSum = 0;
	for(int i = 0; i < n; i += 1)
	{
		currSum += arr[i];
	}
	
	// sum of the numbers from 1 to n 
	int actualSum = n*(n + 1)/2; 
	
	m = actualSum - (currSum - r);
	
	pair<int, int>ans;
	
	ans.first = m;
	ans.second = r;
	
	return ans;
	 
}
