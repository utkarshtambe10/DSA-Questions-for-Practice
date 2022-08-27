1143. Longest Common Subsequence - Leetcode
Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.
A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.
For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.

Input: 
text1 = "abcde", text2 = "ace" 
Output: 3  
Explanation: 
The longest common subsequence is "ace" and its length is 3.

Code:
class Solution {
private:
    int solve(string &a, string &b, int i, int j,  vector<vector<int>> &dp) {
        //base case
        if(i == a.length() || j == b.length())
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        
        //recursive relations/calls
        int ans = 0;
        if(a[i] == b[j])
            ans = 1 + solve(a, b, i + 1, j + 1, dp);
        else
            ans = max(solve(a, b, i + 1, j, dp), solve(a, b, i, j + 1, dp));
        
        return dp[i][j] = ans;
    }

public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.length() + 1, vector<int>(text2.length() + 1, -1));
        
        int ans = solve(text1, text2, 0, 0, dp);
        
        return ans;
    }
};
