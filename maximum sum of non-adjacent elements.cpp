Max Sum without Adjacents - GeeksForGeeks
Given an array Arr of size N containing positive integers.
Find the maximum sum of a subsequence such that no two numbers in the sequence should be adjacent in the array.
  
Input:
N = 6
Arr[] = {5, 5, 10, 100, 10, 5}
Output: 110
Explanation:
If you take indices 0, 3 and 5, then Arr[0]+Arr[3]+Arr[5] = 5 + 100 + 5 = 110.
  
Code:
class Solution {
private:
int solveMem(int *arr, int n, int i, vector<int> &dp) {
    //base case
    if(i >= n)
        return 0;
    if(dp[i] != -1)
        return dp[i];
    
    //recursive calls/relations
    int incl = arr[i] + solveMem(arr, n, i + 2, dp);
    int excl = solveMem(arr, n, i + 1, dp);
    
    return dp[i] = max(incl, excl);
}

public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int> dp(n + 1, -1);
	    int ans = solveMem(arr, n, 0, dp);
	    
	    return ans;
	}
};
