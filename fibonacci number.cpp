509. Fibonacci Number - Leetcode
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1.
That is,
F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).
  
Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
  
Code:
class Solution {
private:
    int solveMem(int n, vector<int> &dp) {
        //base case
        if(n == 0 || n == 1)
            return n;
        if(dp[n] != -1)
            return dp[n];
        
        //recursive relations/calls
        return dp[n] = solveMem(n - 1, dp) + solveMem(n - 2, dp);
    }

public:
    int fib(int n) {
        vector<int> dp(n + 1, -1);
        int ans = solveMem(n, dp);
        
        return ans;
    }
};
